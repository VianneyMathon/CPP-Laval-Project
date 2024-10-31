/**
 * \file TesteurBorneFontaine.cpp
 * \brief Fichier de tests unitaires pour la classe BorneFontaine
 * \author Vianney Mathon
 * \date 2024-04-04
 */

#include <gtest/gtest.h>
#include "BorneFontaine.h"

using namespace borneQuebec;


/**
 * \class uneBorneFontaine
 * \brief Fixture pour la création d'un objet BorneFontaine
 */
class uneBorneFontaine : public ::testing::Test // Un test fixture pour créer un objet BorneFontaine
{
public:
	uneBorneFontaine():f_uneBorneFontaine(1,"100231","1ere Avenue",46.234123,47.23342,"SteFoy","1er arr"){} 

	BorneFontaine f_uneBorneFontaine;
};
/**
 * \brief Test du Constructeur BorneFontaine::BorneFontaine(int p_identifiant,
 *        const std::string& p_identifiantVoiePublique, 
 *        const std::string& p_nomTopographique, double p_latitude, double p_longitude,
 *        const std::string& p_ville, const std::string& p_arrondissement)
 * cas valide : <br>
 * 	ConstructeurBorneFontaineValide: BorneFontaine valide
 * <br>
 * cas invalide : <br>
 * 	ConstructeurBorneInvalide : Borne avec un arrondissement = "" si la ville est Québec
 */

TEST_F(uneBorneFontaine, ConstructeurBorneFontaineValide)
{
    ASSERT_EQ(f_uneBorneFontaine.reqVille (),"SteFoy");
    ASSERT_EQ(f_uneBorneFontaine.reqArrondissement (),"1er arr");
}

TEST(BorneFontaine, ConstructeurBorneInvalide) 
{
  ASSERT_THROW(BorneFontaine b1(1,"100231","1ere Avenue",46.234123,47.23342,"Québec",""),PreconditionException);
}

/**
 * \brief Test de la méthode clone
 */
TEST_F(uneBorneFontaine,clone)
{
  auto ptr_cloneBF = f_uneBorneFontaine.clone();
  ASSERT_EQ(f_uneBorneFontaine.reqBorneFormate (),ptr_cloneBF->reqBorneFormate());
}