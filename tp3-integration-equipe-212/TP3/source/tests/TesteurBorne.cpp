/**
 * \file TesteurBorne.cpp
 * \brief Fichier de tests unitaires pour la classe Borne
 * \author Vianney Mathon
 * \date 2024-03-24
 */

#include <gtest/gtest.h>
#include "Borne.h"
#include <memory>

using namespace borneQuebec;


/**
 * \class BorneDeTest
 * \brief classe de test permettant de tester la classe abstraite Borne
 */
class BorneDeTest : public Borne 
{
    public:
      BorneDeTest(int p_identifiant, const std::string& p_identifiantVoiePublique, 
                  const std::string& p_nomTopographique, double p_latitude, double p_longitude):
      Borne(p_identifiant, p_identifiantVoiePublique, p_nomTopographique, p_latitude, p_longitude){};
      
      virtual std::unique_ptr<Borne> clone() const {return std::make_unique<BorneDeTest> (*this);};
};

/**
 * \brief Test du Constructeur Borne::Borne(int p_identifiant, const std::string& p_identifiantVoiePublique, 
 *        const std::string& p_nomTopographique, double p_latitude, double p_longitude)
 * cas valide : <br>
 * 	ParametresValides: Borne avec un identifiant >0, 
 *      un nom topographique et coordonnées longitude latitude non nulles
 * <br>
 * cas invalides : <br>
 * 	ParametreIdInvalide, ParametreNomTopoInvalide,  ParametreLongiInvalide,ParametreLatiInvalide
 *      : Borne avec un identifiant <=0, nom topographique ou 
 *      coordonnées longitude latitude non renseignées
 */
TEST(Borne,ParametresValides)
{
	BorneDeTest uneBorne(1,"100231","1ere Avenue",46.234123,47.23342);
	ASSERT_EQ(1,uneBorne.reqIdentifiant ());
	ASSERT_EQ("100231",uneBorne.reqIdentifiantVoiePublique ());
        ASSERT_EQ("1ere Avenue",uneBorne.reqnomTopographique ());
        ASSERT_EQ(46.234123,uneBorne.reqLatitude ());
        ASSERT_EQ(47.23342,uneBorne.reqLongitude ());
}

// identifiant valide
TEST(Borne, ParametreIdInvalide)
{
        ASSERT_THROW(BorneDeTest b1(-1,"100231","1ere Avenue",46.234123,47.23342), PreconditionException);
}
// nom topographique invalide 

TEST(Borne, ParametreNomTopoInvalide)
{
	ASSERT_THROW(BorneDeTest b2(1,"100231","",46.234123,47.23342), PreconditionException);
}

// longtitude invalide
TEST(Borne, ParametreLongiInvalide)
{
	ASSERT_THROW(BorneDeTest b3(1,"100231","1ere Avenue",0,47.23342), PreconditionException);
}
// latitude invalide
TEST(Borne, ParametreLatiInvalide)
{
	ASSERT_THROW(BorneDeTest b4(1,"100231","1ere Avenue",46.234123,0), PreconditionException);

}

/**
 * \class uneBorne
 * \brief Fixture pour la création d'un objet BorneDeTest
 * utilisée dans plusieurs tests
 */
class uneBorne : public ::testing::Test // Un test fixture pour créer un objet borne
{
public:
	uneBorne():f_uneBorne(1,"100231","1ere Avenue",46.234123,47.23342), 
                   f_uneBorne2(2,"100231","1ere Avenue",46.234123,47.23342) {};

	BorneDeTest f_uneBorne;
        BorneDeTest f_uneBorne2;
};

/**
 * \brief Test de la méthode void Borne::asgNomTopographique()
 *     	cas valide
 *     		AsgNomTopoValide: Assigner un nom topographique avec un nom de rue
 *   	cas invalides
 *        	nom vide : asgNomTopoInvalide
 */

TEST_F(uneBorne, AsgNomTopoValide)
{
	f_uneBorne.asgNomTopographique("2eme Avenue");
	ASSERT_EQ("2eme Avenue", f_uneBorne.reqnomTopographique());
}

// nom topographique invalide
TEST_F(uneBorne, AsgNomTopoInvalide)
{
	ASSERT_THROW(f_uneBorne.asgNomTopographique(""), PreconditionException);
}

/**
 * \brief Test de la méthode int Borne::reqIdentifiant()
 *        cas valide reqId: Création id valide > 0
 *        cas invalide Aucun d'identifié
 */
TEST_F(uneBorne, reqId)
{
	ASSERT_EQ(1, f_uneBorne.reqIdentifiant());
}

/**
 * \brief Test de la méthode const string& Borne::reqIdentifiantVoiePublique()
 *        cas valide reqIdVP: Création identifiant voie publique
 *        cas invalide Aucun d'identifié
 */
TEST_F(uneBorne, reqIdVP)
{
	ASSERT_EQ("100231", f_uneBorne.reqIdentifiantVoiePublique());
}

/**
 * \brief Test de la méthode const string& Borne::reqnomTopographique()
 *        cas valide reqNom: Création nom valide != ""
 *        cas invalide Aucun d'identifié
 */
TEST_F(uneBorne, reqNom)
{
	ASSERT_EQ("1ere Avenue", f_uneBorne.reqnomTopographique());
}

/**
 * \brief Test de la méthode double Borne::reqLatitude()
 *        cas valide reqLati: Création latitude valide != 0
 *        cas invalide Aucun d'identifié
 */
TEST_F(uneBorne, reqLati)
{
	ASSERT_EQ(46.234123, f_uneBorne.reqLatitude());
}

/**
 * \brief Test de la méthode double Borne::reqLongitude()
 *        cas valide reqLongi: Création longitude valide != 0
 *        cas invalide Aucun d'identifié
 */
TEST_F(uneBorne, reqLongi)
{
	ASSERT_EQ(47.23342, f_uneBorne.reqLongitude());
}

/**
 * \brief Test de la méthode string Borne::reqBorneFormate()
 *        cas valide reqBorne: Création Borne valide
 *        cas invalide Aucun d'identifié
 */
/*
TEST_F(uneBorne, reqBorne)
{
	ASSERT_EQ("Identifiant de la borne  :  1
                  Voie publique            :  100231
                  Nom topographique        :  1ere Avenue
                  Latitude                 :  46.2341
                  Longitude                :  47.2334"
, f_dateTest.reqJour());
}
*/

/**
 * \brief  Test de la méthode bool Borne::operator== (const Borne& p_borne)
 *        cas valide:
 *   		OperatorEgalEgalVrai: 	Borne indentique à elle-même.
 *  		OperatorEgalEgalFaux: 	Dates différentes
 *        cas invalide Aucun d'identifié
 */
TEST_F(uneBorne, OperatorEgalEgalVrai)
{
	ASSERT_EQ(f_uneBorne, f_uneBorne);
}

TEST_F(uneBorne, OperatorEgalEgalFaux)
{
        ASSERT_FALSE(f_uneBorne == f_uneBorne2);       
}