/*
 * File:   supprimerBorne.cpp
 * Author: etudiant
 *
 * Created on 20 avril 2024, 10 h 40
 */

#include "supprimerBorne.h"

supprimerBorne::supprimerBorne ()
{
  widget.setupUi (this);
}

supprimerBorne::~supprimerBorne () { }

int supprimerBorne::reqId()const
{
  return widget.id->value ();
}
