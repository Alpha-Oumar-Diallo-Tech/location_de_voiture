#ifndef CLIENT_H
#define CLIENT_H

#include "Vehicule.h"
#include <vector>
#include <string>

class Client {
private:
    std::vector<Vehicule*> vehiculesLoues;

public:
    void louerVoiture(Vehicule* v);
    void afficherLocations() const;
};

#endif
