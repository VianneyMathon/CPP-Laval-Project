/*
 * File:   fenetrePrincipale.cpp
 * Author: etudiant
 *
 * Created on 19 avril 2024, 01 h 07
 */

#include "fenetrePrincipale.h"
using namespace std;
using namespace borneQuebec;

RegistreBorne registre(" ");

fenetrePrincipale::fenetrePrincipale ()
{
  widget.setupUi (this);
}

fenetrePrincipale::~fenetrePrincipale () { }

void fenetrePrincipale::dialogAddFontaine() 
{
  ajoutBorneFontaine BorneF;
  if (BorneF.exec())
    {
      BorneFontaine bf(BorneF.reqId(),BorneF.reqIdvp().toStdString(),BorneF.reqNomTopo().toStdString(),
                       BorneF.reqLatitude(),BorneF.reqLongitude(),BorneF.reqVille().toStdString(),
                       BorneF.reqArrond().toStdString());
      try
      {
          registre.ajouteBorne(bf);
      }
    catch (const BorneDejaPresenteException& e)
      {
        QString message("Cette borne est déjà présente");
          QMessageBox::information(this,"ERREUR",message);
          return;
      }
    }
  widget.affichage->setText (reqListeFormate().c_str());
}

void fenetrePrincipale::dialogAddStationnement()
{
  ajoutBorneStationnement BorneS;
  if (BorneS.exec())
    {
      BorneStationnement bs(BorneS.reqId(),BorneS.reqIdvp().toStdString(),BorneS.reqNomTopo().toStdString(),
                          BorneS.reqLatitude(),BorneS.reqLongitude(),BorneS.reqNumBorne(),BorneS.reqCoteRue().toStdString());
      try
      {
          registre.ajouteBorne(bs);
      }
    catch (const BorneDejaPresenteException& e)
      {
        QMessageBox::information(this,"ERREUR",e.what());
        return;
      }
    }
  widget.affichage->setText (reqListeFormate().c_str());
}

string fenetrePrincipale::reqListeFormate()const
{
  return registre.reqRegistreBorneFormate ();
}

void fenetrePrincipale::dialogSuppBorne()
{
  supprimerBorne supp;
  if (supp.exec ())
    {
        try
          {
            registre.supprimeBorne (supp.reqId());
          }
        catch(const BorneAbsenteException& e)
          {
            QMessageBox::information(this,"ERREUR",e.what());
            return;
          }
    }
  widget.affichage->setText (reqListeFormate().c_str());

}