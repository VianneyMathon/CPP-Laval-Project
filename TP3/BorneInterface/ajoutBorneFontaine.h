/* 
 * File:   ajoutBorneFontaine.h
 * Author: etudiant
 *
 * Created on 20 avril 2024, 03 h 08
 */

#ifndef _AJOUTBORNEFONTAINE_H
#define _AJOUTBORNEFONTAINE_H

#include "ui_ajoutBorneFontaine.h"
#include "validationFormat.h"

class ajoutBorneFontaine : public QDialog
{
  Q_OBJECT
public:
  ajoutBorneFontaine ();
  virtual ~ajoutBorneFontaine ();
  int reqId()const;
  QString reqIdvp()const;
  QString reqNomTopo()const;
  double reqLongitude()const;
  double reqLatitude()const;
  QString reqVille()const;
  QString reqArrond()const;
  
private slots:
  void valider();
  
private:
  Ui::ajoutBorneFontaine widget;
};

#endif /* _AJOUTBORNEFONTAINE_H */
