#include "Vehicule.h"

Vehicule::Vehicule(std::string immatriculation, double prixParJour)
    : immatriculation(immatriculation), prixParJour(prixParJour) {}

std::string Vehicule::getImmatriculation() const {
    return immatriculation;
}

double Vehicule::getPrixParJour() const {
    return prixParJour;
}

Vehicule::~Vehicule() {}
