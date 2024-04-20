/* 
 * File:   RegistreBorne.h
 * \brief Fichier contenant la déclaration d'une classe implémentant le concept de registre de bornes.
 * Author: Vianney Mathon
 * \date 2024-04-05
 */

#ifndef REGISTREBORNE_H
#define REGISTREBORNE_H

#include <string>
#include <memory>
#include "ContratException.h"
#include <vector>
#include "Borne.h"
#include <sstream>
#include "BorneException.h"
#include <stdexcept>

namespace borneQuebec
{
  
class RegistreBorne 
{
    public:
      RegistreBorne(const std::string& p_nomRegistreBorne);
      RegistreBorne(const RegistreBorne& p_registre);
      const std::string& reqNomRegistreBorne() const;
      int NombreBornes() const;
      void ajouteBorne(const Borne& p_borne);
      RegistreBorne& operator= (const RegistreBorne& p_registre);
      std::string reqRegistreBorneFormate() const;
      void supprimeBorne(int p_identifiant);
      
    private:
      std::string m_nomRegistreBorne;
      std::vector<std::unique_ptr<Borne>> m_bornes;
      void verifieInvariant() const;
  
};


}
#endif /* REGISTREBORNE_H */

