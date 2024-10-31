/**
 * \file BorneStationnement.cpp
 * \brief Implantation de la classe BorneStationnement
 */
#include "BorneStationnement.h"
#include <sstream>
#include <iostream>
#include "ContratException.h"
#include "validationFormat.h"
using namespace std;
namespace borneQuebec {
  
/**
 * \brief Constructeur de la classe BorneStationnement
 * \param[in] p_identifiant est un entier qui représente l'id de la borne
 * \param[in] p_identifiantVoiePublique est une chaîne de caractère qui représente l'id de la voie
 * \param[in] p_nomTopographique est une chaîne de caractère qui représente le nom de la voie
 * \param[in] p_longitude est un nombre à virgule qui représente la position longitudinale de la borne
 * \param[in] p_latitude est un nombre à virgule qui représente la position latitudinale de la borne
 * \param[in] p_numBorne est un entier qui représente le numéro de la borne
 * \param[in] p_coteRue est une chaîne de caractère qui représente le côté par rapport au centre de la chaussée de la borne
 * \pre p_numBorne doit être un entier de 1 à 4 chiffres
 * \pre p_coteRue doit correspondre à "N" ou "E" ou "W" ou "S"
 */
  
  BorneStationnement::BorneStationnement(int p_identifiant, const std::string& p_identifiantVoiePublique, 
        const std::string& p_nomTopographique, double p_latitude, double p_longitude,
        int p_numBorne, const string& p_coteRue):
  
        borneQuebec::Borne(p_identifiant,p_identifiantVoiePublique,
                           p_nomTopographique,p_latitude,p_longitude), 
                           m_numBorne(p_numBorne), m_coteRue(p_coteRue) 
        {
            PRECONDITION(util::validePointCardinal(m_coteRue));
            PRECONDITION(p_numBorne >= 0 && p_numBorne < 10000);
    
            POSTCONDITION(p_numBorne == reqNumBorne());
            POSTCONDITION(p_coteRue == reqCoteRue());
            
            INVARIANTS();
        }
  
 /**
 * \brief retourne une borne formatée dans une chaîne de caracères (string)
 * \return la borne formatée dans une chaîne de caractères
 */
  string BorneStationnement::reqBorneFormate() const
  {
    ostringstream oss;
    oss << "------------------------------------------" << endl;
    oss << "Borne de stationnement" << endl;
    oss << "------------------------------------------" << endl;
    oss << Borne::reqBorneFormate ();
    oss << "Numero de la borne       :  " << m_numBorne << endl;
    oss << "Cote de la rue           :  " << m_coteRue << endl;

    return oss.str();
  }
/**
 * \brief retourne le numéro de la borne dans un entier
 * \return un entier, retour par copie
*/
  int BorneStationnement::reqNumBorne() const 
  {
    return m_numBorne;
  }

/**
 * \brief retourne le coté de la rue dans une chaîne de caractères
 * \return une chaîne de caractère, retour par référence constante
*/
  const std::string& BorneStationnement::reqCoteRue() const 
  {
    return m_coteRue;
  }
  
 /**
  * \brief Teste l'invariant de la classe BorneStationnement. L'invariant de cette classe s'assure que la borne est valide
 */
void BorneStationnement::verifieInvariant() const
{
  INVARIANT(util::validePointCardinal (m_coteRue));
  INVARIANT(m_numBorne >= 0 && m_numBorne < 10000);
}

/**
 * \brief permet de faire une copie sur le monceau
 * \return un pointeur intelligent
*/
 unique_ptr<Borne> BorneStationnement::clone() const 
{
  return make_unique<BorneStationnement> (*this);
}
  
}

