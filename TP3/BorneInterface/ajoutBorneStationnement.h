/* 
 * File:   ajoutBorneStationnement.h
 * Author: etudiant
 *
 * Created on 20 avril 2024, 03 h 31
 */

#ifndef _AJOUTBORNESTATIONNEMENT_H
#define _AJOUTBORNESTATIONNEMENT_H

#include "ui_ajoutBorneStationnement.h"
#include "validationFormat.h"

class ajoutBorneStationnement : public QDialog
{
  Q_OBJECT
public:
  ajoutBorneStationnement ();
  virtual ~ajoutBorneStationnement ();
  int reqId()const;
  QString reqIdvp()const;
  QString reqNomTopo()const;
  double reqLongitude()const;
  double reqLatitude()const;
  QString reqCoteRue()const;
  int reqNumBorne()const;
  
private slots:
  void valider();
  
private:
  Ui::ajoutBorneStationnement widget;
};

#endif /* _AJOUTBORNESTATIONNEMENT_H */
