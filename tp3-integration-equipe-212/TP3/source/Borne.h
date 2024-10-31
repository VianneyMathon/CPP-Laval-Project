/* 
 * File:   Borne.h
 * \brief Fichier contenant la déclaration d'une classe implémentant les bornes.
 * Author: Vianney Mathon
 * \date 2024-03-20
 */

#ifndef BORNE_H
#define BORNE_H
#include <string>
#include "ContratException.h"
#include <memory>
#include "validationFormat.h"
namespace borneQuebec
{
/**
* \class Borne
* \brief Classe implémentant les bornes
*
* On y implémente le concept de bornes avec toutes les informations propres à une borne. 
* On s'assure de la validité de la borne.
* <br>
* Attributs:<br>
* 	int m_identifiant; entier contenant l'identifiant de la borne <br>
        std::string& m_identifiantVoiePublique; chaîne contenant l'identifiant de la voie publique de la borne <br>
        std::string& m_nomTopographique; chaîne contenant le nom topographique de la borne <br>
        double m_longitude; réel contenant la longitude de la borne <br>
        double m_latitude;  réel contenant la latitude de la borne <br>
*/

class Borne
{
public :
  Borne(int p_identifiant, const std::string& p_identifiantVoiePublique, const std::string& p_nomTopographique, double p_latitude, double p_longitude);
  
  int reqIdentifiant() const;
  const std::string& reqIdentifiantVoiePublique() const;
  const std::string& reqnomTopographique() const;
  double reqLongitude() const;
  double reqLatitude() const;
  virtual std::string reqBorneFormate() const;
  
  void asgNomTopographique(const std::string& p_nomTopographique);
  
  bool operator ==(const Borne& p_borne) const;
  
  virtual std::unique_ptr<Borne> clone() const =0;
  virtual ~Borne() {};

private :
  int m_identifiant;
  std::string m_identifiantVoiePublique;
  std::string m_nomTopographique;
  double m_longitude;
  double m_latitude;  
  
  void verifieInvariant() const;
};

}
#endif /* BORNE_H */

