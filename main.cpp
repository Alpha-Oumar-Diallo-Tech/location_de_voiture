#include <iostream>
#include "VoitureEconomique.h"
#include "VoitureDeLuxe.h"
#include "AgenceLocation.h"
#include "Client.h"

int main() {
    AgenceLocation agence;
    Client client1;

    VoitureEconomique* v1 = new VoitureEconomique("AB123CD", 30.0);
    VoitureDeLuxe* v2 = new VoitureDeLuxe("XY789ZT", 100.0);

    agence.ajouterVehicule(v1);
    agence.ajouterVehicule(v2);

    agence.afficherFlotte();

    std::cout << "\nLe client loue la voiture 0...\n";
    agence.traiterLocation(client1, 0);

    std::cout << "\nRésumé des locations du client :\n";
    client1.afficherLocations();

    // Nettoyage mémoire
    delete v1;
    delete v2;

    return 0;
}
