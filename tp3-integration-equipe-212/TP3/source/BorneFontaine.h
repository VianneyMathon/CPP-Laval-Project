/**
 * \file BorneFontaine.h
 * \brief D�claration de la classe BorneFontaine qui h�rite de la classe Borne
 * \author Vianney Mathon
 * \date le 3 avril 2024
 */

#ifndef BORNEFONTAINE_H
#define BORNEFONTAINE_H

#include "Borne.h"

namespace borneQuebec {

class BorneFontaine : public Borne
{
public:
    BorneFontaine(int p_identifiant, const std::string& p_identifiantVoiePublique, 
        const std::string& p_nomTopographique, double p_latitude, double p_longitude,
        const std::string& p_ville, const std::string& p_arrondissement);
    virtual std::string reqBorneFormate() const;
    const std::string& reqVille() const;
    const std::string& reqArrondissement() const;
    virtual std::unique_ptr<Borne> clone() const;


private:
    std::string m_ville;
    std::string m_arrondissement;
    void verifieInvariant() const;
};

}
#endif /* BORNEFONTAINE_H */

