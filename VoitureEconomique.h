#ifndef VOITURE_ECONOMIQUE_H
#define VOITURE_ECONOMIQUE_H

#include "Vehicule.h"

class VoitureEconomique : public Vehicule {
public:
    VoitureEconomique(std::string immatriculation, double prixParJour);
    std::string obtenirType() const override;
};

#endif
