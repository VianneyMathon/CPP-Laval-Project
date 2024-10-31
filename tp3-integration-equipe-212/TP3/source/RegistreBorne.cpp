/**
 * \file RegistreBorne.cpp
 * \brief Implantation de la classe RegistreBorne
 * \author Vianney Mathon
 * \date 2024-04-05
 */

#include "RegistreBorne.h"
using namespace std;

namespace borneQuebec
{
/**
 * \brief Constructeur de la classe RegistreBorne. Il prend en entrée le nom du registre sous forme de CDC
 * \param[in] p_nomRegistreBorne est une chaîne de caractère qui représente le nom du registre
 * \pre p_nomRegistreBorne ne doit pas être vide
 * \post l'objet RegistreBorne avec un paramètre valide est créé
 */
  
  RegistreBorne::RegistreBorne(const string& p_nomRegistreBorne) :
  m_nomRegistreBorne(p_nomRegistreBorne)
  {
    PRECONDITION(!p_nomRegistreBorne.empty());
    POSTCONDITION(p_nomRegistreBorne == reqNomRegistreBorne());
    
    INVARIANTS();
  }
  
/**
 * \brief Constructeur de copie la classe RegistreBorne, c'est une forme canonique de coplien, il faut faire une copie en profondeur
 * \param[in] p_registre est un objet RegistreBorne
 */
  RegistreBorne::RegistreBorne(const RegistreBorne& p_registre) 
  : m_nomRegistreBorne(p_registre.m_nomRegistreBorne)
  {
    for (const auto & element : p_registre.m_bornes)
      {
        ajouteBorne(*element);
      }
  }
  
/**
 * \brief retourne le nom du registre dans une chaîne de caractères
 * \return une chaîne de caractères, retour par référence constante
*/
  const string& RegistreBorne::reqNomRegistreBorne() const 
  {
    return m_nomRegistreBorne;
  }
 
/**
 * \brief retourne le nombre de bornes dans un entier
 * \return un entier, retour par copie
*/
  int RegistreBorne::NombreBornes() const
  {
    return m_bornes.size();
  }
  
/**
 * \brief permet d'ajouter une borne au vecteur de bornes m_bornes
*/  
  void RegistreBorne::ajouteBorne(const Borne& p_borne) 
  {
    vector<unique_ptr<Borne>>::const_iterator iter;
    for (iter=m_bornes.begin(); iter<m_bornes.end();iter++)
      {
        if (**iter==p_borne)
          {
            throw(BorneDejaPresenteException(p_borne.reqBorneFormate ()));
          }
      }
    m_bornes.push_back(p_borne.clone());
    
    INVARIANTS();
  }
  
/**
 * \brief permet de supprimer une borne du vecteur de bornes m_bornes
*/ 
  void RegistreBorne::supprimeBorne(int p_identifiant)
  {
    bool present = false;
    vector<unique_ptr<Borne>>::const_iterator iter;
    for (iter=m_bornes.begin();iter<m_bornes.end();iter++)
      {
        if ((**iter).reqIdentifiant ()==p_identifiant)
          {
            m_bornes.erase(iter);
            present = true;
          }
      }
    if (!present)
      {
        throw(BorneAbsenteException("L'identifiant est introuvable."));
      }
  }
  
/**
 * \brief Teste l'invariant de la classe RegistreBorne. L'invariant de cette classe s'assure que le nom du registre est non vide
 */
void RegistreBorne::verifieInvariant() const 
{
  INVARIANT(!m_nomRegistreBorne.empty());
}

/**
 * \brief c'est une forme canonique de coplien, il faut faire une copie en profondeur
 */
RegistreBorne& RegistreBorne::operator= (const RegistreBorne& p_registre)
{
  if(!(this == &p_registre))
    {
    m_nomRegistreBorne = p_registre.m_nomRegistreBorne;
    m_bornes.clear ();
    
    for (const auto & element : p_registre.m_bornes)
      {
        ajouteBorne(*element);
      }
    POSTCONDITION(m_nomRegistreBorne == p_registre.m_nomRegistreBorne);
    }
  INVARIANTS();
  return (*this);
}

/**
 * \brief convertit les données de l'équipe dans une chaîne de caractères formatée
 * @return un objet string contenant les données formatées
 */
string RegistreBorne::reqRegistreBorneFormate () const
{
  ostringstream os;
  os << "Registre : " << m_nomRegistreBorne << endl << "\n";
  for (const auto & element : m_bornes)
    {
      os << element->reqBorneFormate () << endl;
    }
  return os.str ();
}


}