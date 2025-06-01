#include "AgenceLocation.h"
#include <iostream>

void AgenceLocation::ajouterVehicule(Vehicule* v) {
    flotte.push_back(v);
}

void AgenceLocation::traiterLocation(Client& client, int index) {
    if (index >= 0 && index < flotte.size()) {
        client.louerVoiture(flotte[index]);
    } else {
        std::cout << "Indice invalide.\n";
    }
}

void AgenceLocation::afficherFlotte() const {
    std::cout << "Flotte disponible :\n";
    for (int i = 0; i < flotte.size(); ++i) {
        std::cout << i << " - " << flotte[i]->obtenirType()
                  << " (Immatriculation : " << flotte[i]->getImmatriculation()
                  << ", Prix : " << flotte[i]->getPrixParJour() << ")\n";
    }
}
