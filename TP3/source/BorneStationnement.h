/**
 * \file BorneStationnement.h
 * \brief D�claration de la classe BorneStationnement qui h�rite de la classe Borne
 * \author Vianney Mathon
 * \date le 4 avril 2024
 */

#ifndef BORNESTATIONNEMENT_H
#define BORNESTATIONNEMENT_H

#include "Borne.h"

namespace borneQuebec {

class BorneStationnement : public Borne
{
public:
    BorneStationnement(int p_identifiant, const std::string& p_identifiantVoiePublique, 
        const std::string& p_nomTopographique, double p_latitude, double p_longitude,
        int p_numBorne, const std::string& p_coteRue);
    virtual std::string reqBorneFormate() const;
    int reqNumBorne() const;
    const std::string& reqCoteRue() const;
    virtual std::unique_ptr<Borne> clone() const;

private:
    int m_numBorne;
    std::string m_coteRue;
    void verifieInvariant() const;
};

}


#endif /* BORNESTATIONNEMENT_H */

