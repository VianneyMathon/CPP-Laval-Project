/*
 * File:   ajoutBorneFontaine.cpp
 * Author: etudiant
 *
 * Created on 20 avril 2024, 03 h 07
 */

#include "ajoutBorneFontaine.h"
#include <QMessageBox>
#include <QString>
#include "BorneFontaine.h"
using namespace borneQuebec;

ajoutBorneFontaine::ajoutBorneFontaine ()
{
  widget.setupUi (this);
}

ajoutBorneFontaine::~ajoutBorneFontaine () { }

  int ajoutBorneFontaine::reqId()const
  {
    return widget.id->value();
  }
  QString ajoutBorneFontaine::reqIdvp()const
  {
    return widget.idvp->text ();
  }
  QString ajoutBorneFontaine::reqNomTopo()const
  {
    return widget.nomtopo->text ();
  }
  double ajoutBorneFontaine::reqLongitude()const
  {
    return widget.longitude->value ();
  }
  double ajoutBorneFontaine::reqLatitude()const
  {
    return widget.latitude->value ();
  }
  QString ajoutBorneFontaine::reqVille()const
  {
    return widget.ville->text ();
  }
  QString ajoutBorneFontaine::reqArrond()const
  {
    return widget.arrondissement->text ();
  }
  

  void ajoutBorneFontaine::valider()
  {
    if (!(!(reqVille()=="Québec" && reqArrond().isEmpty ()) && 
        reqId() > 0 && !reqNomTopo().isEmpty () && reqLongitude() !=0 && reqLatitude() !=0 
        && util::estEntier(reqIdvp().toStdString())))
        {
          QString message("Un des champs est incorrect.");
          QMessageBox::information(this,"ERREUR",message);
          return;
        }  
    
    accept();
  }