#include "validationFormat.h"
#include <sstream>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

namespace util 
{

  bool estEntier(const string& p_chaine) 
  {
  for (char c : p_chaine)
    {
      if (!isdigit(c)) {return false;}
    }
  return true;
  }
  
  
  bool validePointCardinal (const string& p_cardinalite)
  {
    return p_cardinalite == "N" || p_cardinalite == "E" || p_cardinalite == "S"
            || p_cardinalite == "O" || p_cardinalite =="";
  }
  
  bool valideLigneCVSBorneStationnement (const string& p_ligne)
   {
     string id, noBorne, coteRue, idVoiePublique, nomTopographique, longitude, latitude;
     istringstream iss(p_ligne);
     
     if (getline(iss,id,',') && getline(iss,noBorne,',')&& getline(iss,coteRue,',')
        && getline(iss,idVoiePublique,',') && getline(iss,nomTopographique,',') 
        && getline(iss,longitude,',') && getline(iss,latitude,',') ) 
       {
         return (id != "" && noBorne != "" && nomTopographique != ""
             && longitude.substr (0,3) == "-71" && latitude.substr(0,2) == "46"
             && validePointCardinal(coteRue));
       }
     else 
       {
         return false;
       }
   }
  
   bool valideFichierBornesStationnement (istream& p_fluxBornesStationnement)
   {
     string champsvalides = "ID,NO_BORNE,COTE_RUE,ID_VOIE_PUBLIQUE,NOM_TOPOGRAPHIQUE,LONGITUDE,LATITUDE";
     string champsfournis;
            
     if(getline(p_fluxBornesStationnement,champsfournis))
       {
         if(champsfournis == champsvalides)
           {
             string ligne;
             while(getline(p_fluxBornesStationnement,ligne))
               {
                 if(!valideLigneCVSBorneStationnement(ligne))
                   {
                     cout << "Une ligne n'est pas conforme." << endl;
                     return false;
                   }
               }
             cout << "Le fichier est valide." << endl;
             return true;
           }
         else
           cout << "Les champs ne sont pas valides" << endl;
           return false;
       }
     else 
       cout << "L'en-tête n'a pas pu être lu." << endl;
       return false;
     
   }


}
