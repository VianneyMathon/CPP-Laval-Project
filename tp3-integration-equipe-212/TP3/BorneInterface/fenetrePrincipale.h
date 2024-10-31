/* 
 * File:   fenetrePrincipale.h
 * Author: etudiant
 *
 * Created on 19 avril 2024, 01 h 07
 */

#ifndef _FENETREPRINCIPALE_H
#define _FENETREPRINCIPALE_H

#include "ui_fenetrePrincipale.h"
#include "Borne.h"
#include "BorneFontaine.h"
#include "BorneStationnement.h"
#include "RegistreBorne.h"
#include <string>
#include "ajoutBorneFontaine.h"
#include "ajoutBorneStationnement.h"
#include <QMessageBox>
#include <QString>
#include "supprimerBorne.h"

class fenetrePrincipale : public QMainWindow
{
  Q_OBJECT
  
public:
  fenetrePrincipale ();
  virtual ~fenetrePrincipale ();
  std::string reqListeFormate()const;
  
private slots:
  void dialogAddFontaine();
  void dialogAddStationnement();
  void dialogSuppBorne();
  
private:
  Ui::fenetrePrincipale widget;
};

#endif /* _FENETREPRINCIPALE_H */
