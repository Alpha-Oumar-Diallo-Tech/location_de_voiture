#ifndef VEHICULE_H
#define VEHICULE_H

#include <string>

class Vehicule {
protected:
    std::string immatriculation;
    double prixParJour;

public:
    Vehicule(std::string immatriculation, double prixParJour);
    virtual std::string obtenirType() const = 0;
    std::string getImmatriculation() const;
    double getPrixParJour() const;
    virtual ~Vehicule();
};

#endif
