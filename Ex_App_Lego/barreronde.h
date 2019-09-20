/**
  *@file barreronde.h
  *@brief Définition de la classe BarreRonde
  *@version 1.1
  * @author Antoine CHEVREL
  * @date 20 septembre 2019
  */

#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"


class BarreRonde: public Barre
{
public:
    BarreRonde(string _ref, int _longueur,int _diametre, float _densite, string _nom);
    double CalculerSection();
    float CalculerMasse();
    ~BarreRonde();
private:
    int diametre;
};

#endif // BARRERONDE_H
