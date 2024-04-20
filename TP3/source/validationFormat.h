
#ifndef VALIDATIONFORMAT_H
#define VALIDATIONFORMAT_H

#include <string>
#include <iostream>

namespace util 
{
  
  bool validePointCardinal (const std::string& p_cardinalite);
  bool valideLigneCVSBorneStationnement (const std::string& p_ligne);
  bool valideFichierBornesStationnement (std::istream& p_fluxBornesStationnement);
  bool estEntier(const std::string& p_chaine) ;
  
}


#endif /* VALIDATIONFORMAT_H */

