/**
 * \file TesteurRegistreborne.cpp
 * \brief Fichier de tests unitaires pour la classe RegistreBorne
 * \author Vianney Mathon
 * \date 2024-04-05
 */

#include "gtest/gtest.h"
#include "RegistreBorne.h"
#include "BorneFontaine.h"
using namespace borneQuebec;

/**
 * \brief Test du Constructeur RegistreBorne::RegistreBorne(const string& p_registre)
 * cas valide : <br>
 * 	ParametreValide: Nom du registre non vide
 * <br>
 * cas invalides : <br>
 * 	ParametreInvalide: Nom du registre vixe
 */

TEST(RegistreBorne,ParametreValide)
{
  RegistreBorne r1("Exemple de nom");
  ASSERT_EQ(r1.reqNomRegistreBorne (),"Exemple de nom");
}

TEST(RegistreBorne,ParametreInvalide)
{
  ASSERT_THROW(RegistreBorne r1(""),PreconditionException);
}

/**
 * \class unRegistre
 * \brief Fixture pour la création d'un objet RegistreBorne
 * utilisé dans plusieurs tests
 */
class unRegistre : public ::testing::Test
{
    public:
      unRegistre():f_unRegistre("Nom du registre") {}
    
      RegistreBorne f_unRegistre;
};

/**
 * \brief Test du Constructeur de copie RegistreBorne::RegistreBorne(const Borne& p_borne)
 * cas valide : <br>
 * 	ConstructeurCopieValide: l'objet est créé
 * <br>
 * cas invalides : <br>
 * 	Aucun identifié
 */

TEST_F(unRegistre,ConstructeurCopieValide)
{
  RegistreBorne r1(f_unRegistre);
  ASSERT_EQ(r1.reqNomRegistreBorne(),f_unRegistre.reqNomRegistreBorne());
}

/**
 * \brief Test des méthodes NombreBornes() et ajouteBorne()
 */
TEST_F(unRegistre,NombreBornes)
{
  ASSERT_EQ(f_unRegistre.NombreBornes(),0);
  BorneFontaine b(1,"10023","Rue Laval",1.0,1.0,"Ville","Arrondissement");
  f_unRegistre.ajouteBorne(b);
  ASSERT_EQ(f_unRegistre.NombreBornes(),1);
}

/**
 * \brief Test de l'opérateur de copie =
 */
TEST_F(unRegistre,OperateurEgal)
{
  BorneFontaine b(1,"10023","Rue Laval",1.0,1.0,"Ville","Arrondissement");
  f_unRegistre.ajouteBorne (b);
  RegistreBorne r("un Nom");
  r = f_unRegistre;
  ASSERT_EQ(r.reqNomRegistreBorne(),f_unRegistre.reqNomRegistreBorne());
  ASSERT_EQ(r.NombreBornes(),f_unRegistre.NombreBornes());
}


