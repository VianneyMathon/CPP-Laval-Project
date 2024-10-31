/* 
 * File:   supprimerBorne.h
 * Author: etudiant
 *
 * Created on 20 avril 2024, 10 h 40
 */

#ifndef _SUPPRIMERBORNE_H
#define _SUPPRIMERBORNE_H

#include "ui_supprimerBorne.h"

class supprimerBorne : public QDialog
{
  Q_OBJECT
public:
  supprimerBorne ();
  virtual ~supprimerBorne ();
  int reqId()const;
    
private:
  Ui::supprimerBorne widget;
};

#endif /* _SUPPRIMERBORNE_H */
