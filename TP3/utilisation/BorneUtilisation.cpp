/* 
 * File:   main.cpp
 * Author: etudiant
 *
 * Created on 20 mars 2024, 18 h 21
 */
#include "Borne.h"
#include "BorneFontaine.h"
#include "BorneStationnement.h"
#include "ContratException.h"
#include "RegistreBorne.h"
#include <iostream>
#include "validationFormat.h"

using namespace std;
using namespace borneQuebec;

/*
 * 
 */
int
main ()
{
  cout << "Enregistrement d'une borne fontaine : " << endl;
  int repid;
  string repidvp,reptopo,repville,reparr;
  double replongi,replati;
  
  bool idvalide=false;
  while(!idvalide) 
    {
      cout << "Entrez l'identifiant de la borne : ";
      cin >> repid;
      if (repid >= 0) {idvalide=true;}
    }
  
    
  bool idvpvalide=false;
  while(!idvpvalide)
    {
      cout << "Entrez l'identifiant de la voie publique de la borne : ";
      cin >> repidvp;
      if (util::estEntier (repidvp)) {idvpvalide=true;}
    }
  
  bool nomtopovalide=false;
  while(!nomtopovalide)
    {
      cout << "Entrez le nom topographique de la borne : ";
      cin >> reptopo;
      if (!reptopo.empty ()) {nomtopovalide=true;}
    } 
  
  bool longitudevalide=false;
  while(!longitudevalide)
    {
      cout << "Entrez la longitude de la borne : ";
      cin >> replongi;
      if (replongi != 0) {longitudevalide=true;}
    } 
  
  bool latitudevalide=false;
  while(!latitudevalide)
    {
      cout << "Entrez la latitude de la borne : ";
      cin >> replati;
      if (replati != 0) {latitudevalide=true;}
    }
  
  bool villearrvalide=false;
  while(!villearrvalide)
    {
      cout << "Entrez la ville de la borne : ";
      cin >> repville;
      cout << "Entrez l'arrondissement de la borne : ";
      cin >> reparr;
      if (repville != "Québec") {villearrvalide=true;}
      else {if (reparr!="") {villearrvalide=true;}}
    }
  
  // *********************************************************************
  
  cout << "\n" << "Enregistrement d'une borne de stationnement" << endl;
  int repid2,repnumborne;
  string repidvp2,reptopo2,repcoterue;
  double replongi2,replati2;
  
  bool idvalide2=false;
  while(!idvalide2) 
    {
      cout << "Entrez l'identifiant de la borne : ";
      cin >> repid2;
      if (repid2 >= 0) {idvalide2=true;}
    }
  
    
  bool idvpvalide2=false;
  while(!idvpvalide2)
    {
      cout << "Entrez l'identifiant de la voie publique de la borne : ";
      cin >> repidvp2;
      if (util::estEntier (repidvp2)) {idvpvalide2=true;}
    }
  
  bool nomtopovalide2=false;
  while(!nomtopovalide2)
    {
      cout << "Entrez le nom topographique de la borne : ";
      cin >> reptopo2;
      if (!reptopo2.empty ()) {nomtopovalide2=true;}
    }
  
  bool longitudevalide2=false;
  while(!longitudevalide2)
    {
      cout << "Entrez la longitude de la borne : ";
      cin >> replongi2;
      if (replongi2 != 0) {longitudevalide2=true;}
    }
  
  bool latitudevalide2=false;
  while(!latitudevalide2)
    {
      cout << "Entrez la latitude de la borne : ";
      cin >> replati2;
      if (replati2 != 0) {latitudevalide2=true;}
    }
  
  bool numbornevalide=false;
  while(!numbornevalide)
    {
      cout << "Entrez le numéro de la borne : ";
      cin >> repnumborne;
      if (repnumborne>=0 && repnumborne<10000) {numbornevalide=true;}
    }
  
  bool nomcoteruevalide=false;
  while(!nomcoteruevalide)
    {
      cout << "Entrez le côté de la rue de la borne (N,S,0,E) : ";
      cin >> repcoterue;
      if (util::validePointCardinal(repcoterue)) {nomcoteruevalide=true;}
    }
  
  BorneFontaine b1(repid,repidvp,reptopo,replati,replongi,repville,reparr);
  BorneStationnement b2(repid2,repidvp2,reptopo2,replati2,replongi2,repnumborne,repcoterue);
  
  RegistreBorne r("Bornes de l'agglomération de la ville de Québec");
  r.ajouteBorne (b1);
  r.ajouteBorne (b2);
  
  cout << "\n" << "Contenu du registre :" << endl << "\n";
  cout << r.reqRegistreBorneFormate ();
  
  int ident;
  cout << "Identifiant d'une borne à supprimer : ";
  cin >> ident;
  r.supprimeBorne (ident);
  
  cout << r.reqRegistreBorneFormate ();
  
  return 0;
}

