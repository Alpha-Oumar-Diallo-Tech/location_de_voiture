#include "Client.h"
#include <iostream>

void Client::louerVoiture(Vehicule* v) {
    vehiculesLoues.push_back(v);
}

void Client::afficherLocations() const {
    std::cout << "Véhicules loués :\n";
    for (const auto& v : vehiculesLoues) {
        std::cout << " - " << v->obtenirType()
                  << " (Immatriculation : " << v->getImmatriculation()
                  << ", Prix par jour : " << v->getPrixParJour() << ")\n";
    }
}
