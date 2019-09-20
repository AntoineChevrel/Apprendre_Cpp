/**
  *@file barre.h
  *@brief Définition de la classe Barre
  *@version 1.1
  * @author Antoine CHEVREL
  * @date 20 septembre 2019
  */

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
    protected:
    string ref;
    int longueur;
    float densite;
    string nom;
};

#endif // BARRE_H
