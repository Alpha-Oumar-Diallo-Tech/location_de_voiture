#ifndef AGENCELOCATION_H
#define AGENCELOCATION_H

#include "Vehicule.h"
#include "Client.h"
#include <vector>

class AgenceLocation {
private:
    std::vector<Vehicule*> flotte;

public:
    void ajouterVehicule(Vehicule* v);
    void traiterLocation(Client& client, int index);
    void afficherFlotte() const;
};

#endif
