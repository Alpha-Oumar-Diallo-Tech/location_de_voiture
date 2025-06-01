#include "VoitureEconomique.h"

VoitureEconomique::VoitureEconomique(std::string immatriculation, double prixParJour)
    : Vehicule(immatriculation, prixParJour) {}

std::string VoitureEconomique::obtenirType() const {
    return "Voiture Économique";
}
