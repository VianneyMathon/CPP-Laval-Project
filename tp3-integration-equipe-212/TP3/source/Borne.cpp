/**
 * \file Borne.cpp
 * \brief Implantation de la classe Borne
 * \author Vianney Mathon
 * \date 2024-03-21
 */

#include "Borne.h"
#include <string>
#include <sstream>
using namespace std;

namespace borneQuebec
{
/**
 * \brief Constructeur de la borne. Il reçoit en entrée les informations nécessaires afin de créer une borne valide
 * \param[in] p_identifiant est un entier qui représente l'id de la borne
 * \param[in] p_identifiantVoiePublique est une chaîne de caractère qui représente l'id de la voie
 * \param[in] p_nomTopographique est une chaîne de caractère qui représente le nom de la voie
 * \param[in] p_longitude est un nombre à virgule qui représente la position longitudinale de la borne
 * \param[in] p_latitude est un nombre à virgule qui représente la position latitudinale de la borne
 * \pre p_identifiant doit être supérieur à 0, p_nomTopographique et p_longitude,p_latitude ne doivent pas être vides
 * \post l'objet borne valide avec les paramètres donnés est créé
 */
Borne::Borne(int p_identifiant, const std::string& p_identifiantVoiePublique, 
             const std::string& p_nomTopographique, double p_latitude, double p_longitude):

        m_identifiant(p_identifiant), m_identifiantVoiePublique(p_identifiantVoiePublique), 
        m_nomTopographique(p_nomTopographique), m_latitude(p_latitude), m_longitude(p_longitude)
{
  PRECONDITION (m_identifiant > 0 && !m_nomTopographique.empty() && m_longitude !=0 && m_latitude !=0 
          && util::estEntier(m_identifiantVoiePublique));
  
  POSTCONDITION(p_identifiant == reqIdentifiant());
  POSTCONDITION(p_identifiantVoiePublique == reqIdentifiantVoiePublique());
  POSTCONDITION(p_nomTopographique == reqnomTopographique());
  POSTCONDITION(p_longitude == reqLongitude());
  POSTCONDITION(p_latitude == reqLatitude());
  
  INVARIANTS();
}

/**
 * \brief retourne l'identifiant de la borne dans un entier
 * \return un entier, retour par copie
*/
int Borne::reqIdentifiant() const
{
  return m_identifiant;
}


/**
 * \brief retourne l'identifiant de la voie dans une chaîne de caractères
 * \return une chaîne de caractères, retour par référence constante
*/
const string& Borne::reqIdentifiantVoiePublique()const
{
  return m_identifiantVoiePublique;
}


/**
 * \brief retourne le nom de la voie dans une chaîne de caractères
 * \return une chaîne de caractères, retour par référence constante
*/
const string& Borne::reqnomTopographique() const
{
  return m_nomTopographique;
}


/**
 * \brief retourne la position latitudinale dans un nombre à virgule
 * \return un nombre à virgule, retour par copie
*/
double Borne::reqLatitude() const
{
  return m_latitude;
}


/**
 * \brief retourne la position longitudinale dans un nombre à virgule
 * \return un nombre à virgule, retour par copie
*/
double Borne::reqLongitude() const
{
  return m_longitude;
}


/**
 * \brief Assigne un nom de voie à l'objet courant
 * \param[in] p_nomTopographique est une chaîne de caractères qui représente un nom de voie
 * \pre p_nomTopographique doit être une chaîne non vide
 * \post l'objet a été assigné à partir de la chaîne passée en paramètre
 */
void Borne::asgNomTopographique(const std::string& p_nomTopographique)
{
  PRECONDITION (!p_nomTopographique.empty());
  m_nomTopographique = p_nomTopographique;
  POSTCONDITION (reqnomTopographique() == p_nomTopographique);
  INVARIANTS();
}


/**
 * \brief retourne une borne formatée dans une chaîne de caracères (string)
 * \return la borne formatée dans une chaîne de caractères
 */
string Borne::reqBorneFormate() const
{
  ostringstream os;
  os << "Identifiant de la borne  :  " << m_identifiant << endl;
  os << "Voie publique            :  " << m_identifiantVoiePublique << endl;
  os << "Nom topographique        :  " << m_nomTopographique << endl;
  os << "Latitude                 :  " << m_latitude << endl;
  os << "Longitude                :  " << m_longitude << endl;
  
  return os.str();
}


/**
 * \brief surcharge de l'opérateur ==
 * \param[in] p_borne à comparer à la borne courante
 * \return un booléen indiquant si les deux bornes sont égales ou non
 */
bool Borne::operator ==(const Borne& p_borne) const
{
  return (m_identifiant == p_borne.m_identifiant && m_identifiantVoiePublique == p_borne.m_identifiantVoiePublique
          && m_nomTopographique == p_borne.m_nomTopographique && m_latitude == p_borne.m_latitude
          && m_longitude == p_borne.m_longitude);
}



/**
 * \brief Teste l'invariant de la classe Borne. L'invariant de cette classe s'assure que la borne est valide
 */
void Borne::verifieInvariant() const
{
  INVARIANT (m_identifiant > 0 );
  INVARIANT (!m_nomTopographique.empty());
  INVARIANT (m_longitude != 0 && m_latitude !=0);
}




}