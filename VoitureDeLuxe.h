#ifndef VOITURE_DELUXE_H
#define VOITURE_DELUXE_H

#include "Vehicule.h"

class VoitureDeLuxe : public Vehicule {
public:
    VoitureDeLuxe(std::string immatriculation, double prixParJour);
    std::string obtenirType() const override;
};

#endif
