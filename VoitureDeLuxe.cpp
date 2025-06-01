#include "VoitureDeLuxe.h"

VoitureDeLuxe::VoitureDeLuxe(std::string immatriculation, double prixParJour)
    : Vehicule(immatriculation, prixParJour) {}

std::string VoitureDeLuxe::obtenirType() const {
    return "Voiture De Luxe";
}
