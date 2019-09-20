/**
  *@file barrerectangle.h
  *@brief Définition de la classe BarreRectangle
  *@version 1.1
  * @author Antoine CHEVREL
  * @date 20 septembre 2019
  */

#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"

class BarreRectangle: public Barre
{
public:
    BarreRectangle(string _ref, int _longueur,int _largeur, float _densite, string _nom);
    float CalculerSection();
    float CalculerMasse();
    ~BarreRectangle();
private:
    int largeur;
};

#endif // BARRERECTANGLE_H
