/**
 * \file BorneFontaine.cpp
 * \brief Implantation de la classe BorneFontaine
 */
#include "BorneFontaine.h"
#include <sstream>
#include <iostream>
#include "ContratException.h"
using namespace std;
namespace borneQuebec {
  
/**
 * \brief Constructeur de la classe BorneFontaine
 * \param[in] p_identifiant est un entier qui représente l'id de la borne
 * \param[in] p_identifiantVoiePublique est une chaîne de caractère qui représente l'id de la voie
 * \param[in] p_nomTopographique est une chaîne de caractère qui représente le nom de la voie
 * \param[in] p_longitude est un nombre à virgule qui représente la position longitudinale de la borne
 * \param[in] p_latitude est un nombre à virgule qui représente la position latitudinale de la borne
 * \param[in] p_ville est une chaîne de caractère qui représente la ville de la borne
 * \param[in] p_arrondissement est une chaîne de caractère qui représente l'arrondissement de la borne
 * \pre p_arrondissement ne doit pas être vide si p_ville est égal à Québec
 */
  
  BorneFontaine::BorneFontaine(int p_identifiant, const std::string& p_identifiantVoiePublique, 
        const std::string& p_nomTopographique, double p_latitude, double p_longitude,
        const std::string& p_ville, const std::string& p_arrondissement):
  
        borneQuebec::Borne(p_identifiant,p_identifiantVoiePublique,
                           p_nomTopographique,p_latitude,p_longitude), 
                           m_ville(p_ville), m_arrondissement(p_arrondissement) 
        {
            if (m_ville == "Québec")
              {
                PRECONDITION(!m_arrondissement.empty());
              }
            POSTCONDITION(p_ville == reqVille());
            POSTCONDITION(p_arrondissement == reqArrondissement());
            
            INVARIANTS();
        }
  
 /**
 * \brief retourne une borne formatée dans une chaîne de caracères (string)
 * \return la borne formatée dans une chaîne de caractères
 */
  string BorneFontaine::reqBorneFormate() const
  {
    ostringstream oss;
    oss << "------------------------------------------" << endl;
    oss << "Borne fontaine" << endl;
    oss << "------------------------------------------" << endl;
    oss << Borne::reqBorneFormate ();
    oss << "Ville                    :  " << m_ville << endl;
    oss << "Arrondissement           :  " << m_arrondissement << endl;
    return oss.str();
  }
/**
 * \brief retourne la ville dans une chaîne de caractères
 * \return une chaîne de caractère, retour par référence constante
*/
  const std::string& BorneFontaine::reqVille() const 
  {
    return m_ville;
  }

/**
 * \brief retourne l'arrondissement dans une chaîne de caractères
 * \return une chaîne de caractère, retour par référence constante
*/
  const std::string& BorneFontaine::reqArrondissement() const 
  {
    return m_arrondissement;
  }
  
 /**
  * \brief Teste l'invariant de la classe BorneFontaine. L'invariant de cette classe s'assure que la borne est valide
 */
void BorneFontaine::verifieInvariant() const
{
  if (m_ville == "Québec")
              {
                INVARIANT(!m_arrondissement.empty());
              }
}
  
/**
 * \brief permet de faire une copie sur le monceau
 * \return un pointeur
*/
 unique_ptr<Borne> BorneFontaine::clone() const 
{
  return make_unique<BorneFontaine> (*this);
}

}

