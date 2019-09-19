#ifndef BARRE_H
#define BARRE_H
#include <iostream>
using namespace std;

class Barre
{
public:
    Barre(string _ref, int _longueur, float _densite, string _nom);
    void AfficherCaracteristiques();
    ~Barre();
private:
    string ref;
    int longueur;
    float densite;
    string nom;
};

#endif // BARRE_H
