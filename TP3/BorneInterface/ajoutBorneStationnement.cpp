/*
 * File:   ajoutBorneStationnement.cpp
 * Author: etudiant
 *
 * Created on 20 avril 2024, 03 h 31
 */

#include "ajoutBorneStationnement.h"
#include <QMessageBox>
#include <QString>
#include "BorneStationnement.h"
using namespace borneQuebec;


ajoutBorneStationnement::ajoutBorneStationnement ()
{
  widget.setupUi (this);
}

ajoutBorneStationnement::~ajoutBorneStationnement () { }

  int ajoutBorneStationnement::reqId()const
  {
    return widget.id->value();
  }
  QString ajoutBorneStationnement::reqIdvp()const
  {
    return widget.idvp->text ();
  }
  QString ajoutBorneStationnement::reqNomTopo()const
  {
    return widget.nomtopo->text ();
  }
  double ajoutBorneStationnement::reqLongitude()const
  {
    return widget.longitude->value ();
  }
  double ajoutBorneStationnement::reqLatitude()const
  {
    return widget.latitude->value ();
  }
  int ajoutBorneStationnement::reqNumBorne()const
  {
    return widget.numborne->value();
  }
  QString ajoutBorneStationnement::reqCoteRue()const
  {
    return widget.coterue->text ();
  }

  
  void ajoutBorneStationnement::valider()
  {
    if (!(util::validePointCardinal(reqCoteRue().toStdString()) && reqNumBorne()>=0 && reqNumBorne()<10000 && 
        reqId() > 0 && !reqNomTopo().isEmpty () && reqLongitude() !=0 && reqLatitude() !=0 
        && util::estEntier(reqIdvp().toStdString())))
        {
          QString message("Un des champs est incorrect.");
          QMessageBox::information(this,"ERREUR",message);
          return;
        }  
    
    accept();
    
  }