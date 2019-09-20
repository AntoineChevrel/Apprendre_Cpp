/**
  *@file barrecarre.h
  *@brief Définition de la classe BarreCarre
  *@version 1.1
  * @author Antoine CHEVREL
  * @date 20 septembre 2019
  */

#ifndef BARRECARRE_H
#define BARRECARRE_H
#include "barre.h"


class BarreCarre: public Barre
{
public:
    BarreCarre(string _ref, int _longueur, float _densite, string _nom);
    float CalculerSection();
    float CalculerMasse();
    ~BarreCarre();
private:

};

#endif // BARRECARRE_H
