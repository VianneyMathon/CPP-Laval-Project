/**
 * \file TesteurBorneStationnement.cpp
 * \brief Fichier de tests unitaires pour la classe BorneStationnement
 * \author Vianney Mathon
 * \date 2024-04-04
 */

#include <gtest/gtest.h>
#include "BorneStationnement.h"

using namespace borneQuebec;


/**
 * \class uneBorneStationnement
 * \brief Fixture pour la création d'un objet BorneStationnement
 */
class uneBorneStationnement : public ::testing::Test // Un test fixture pour créer un objet BorneStationnement
{
public:
	uneBorneStationnement():f_uneBorneStationnement(1,"100231","1ere Avenue",46.234123,47.23342,1,"N"){} 

	BorneStationnement f_uneBorneStationnement;
};
/**
 * \brief Test du Constructeur BorneStationnement::BorneStationnement(int p_identifiant,
 *        const std::string& p_identifiantVoiePublique, 
 *        const std::string& p_nomTopographique, double p_latitude, double p_longitude,
 *        int p_numBorne, const std::string& p_coteRue)
 * cas valide : <br>
 * 	ConstructeurBorneStationnementValide: BorneStationnement valide
 * <br>
 * cas invalide : <br>
 * 	ConstructeurBorneInvalide : Borne avec un numéro < 0 ou >= 10000 ou un cote rue invalide
 */

TEST_F(uneBorneStationnement, ConstructeurBorneStationnementValide)
{
    ASSERT_EQ(f_uneBorneStationnement.reqNumBorne (),1);
    ASSERT_EQ(f_uneBorneStationnement.reqCoteRue (),"N");
}

TEST(BorneStationnement, ConstructeurBorneInvalide) 
{
  ASSERT_THROW(BorneStationnement b1(1,"100231","1ere Avenue",46.234123,47.23342,-1,"N"),PreconditionException);
  ASSERT_THROW(BorneStationnement b2(1,"100231","1ere Avenue",46.234123,47.23342,10000,"N"),PreconditionException);
  ASSERT_THROW(BorneStationnement b3(1,"100231","1ere Avenue",46.234123,47.23342,3,"A"),PreconditionException);
}

/**
 * \brief Test de la méthode clone
 */
TEST_F(uneBorneStationnement,clone)
{
  auto ptr_cloneBS = f_uneBorneStationnement.clone();
  ASSERT_EQ(f_uneBorneStationnement.reqBorneFormate (),ptr_cloneBS->reqBorneFormate());
}