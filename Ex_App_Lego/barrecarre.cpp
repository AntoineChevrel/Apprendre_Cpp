/**
  *@file barrecarre.cpp
  *@brief implémentation de la classe BarreCarre
  *@version 1.1
  * @author Antoine CHEVREL
  * @date 20 septembre 2019
  */

#include "barrecarre.h"

/**
 * @brief BarreCarre::BarreCarre
 * @details Constructeur de la classe BarreCarre
 *@param _ref indique une chaîne de caractère (la référence de la barre, ex.: "20-15")
 *@param _longueur prend la valeur d'un entier
 *@param _densite prend la valeur d'un entier
 *@param _nom indique une chaîne de caractère (le nom de la barre, ex.: "Bronze")
 */

BarreCarre::BarreCarre(string _ref, int _longueur, float _densite, string _nom):
    Barre (_ref, _longueur, _densite, _nom)
{
    //cout << "Constructeur de la classe BarreCarre" << endl;

    cout <<"LA BARRE CARRE :" << endl;

    cout << "La référence est : " << ref << endl;
    cout << "La longueur est de : " << longueur << " cm" << endl;
    cout << "La densité est de : " << densite << endl;
    cout << "Le Nom de l'alliage est : " << nom << endl;
}

/**
 * @brief Barre::AfficherCaracteristiques
 * @details Renvoi le calcul de la section (aire) de la barre
 */

float BarreCarre::CalculerSection()
{
    return longueur*longueur;
}

/**
 * @brief BarreCarre::CalculerMasse
 * @details Renvoi le calcul de la masse de la barre
 */

float BarreCarre::CalculerMasse()
{
    return longueur*densite*BarreCarre::CalculerSection();
}

/**
 * @brief Barre::~Barre
 * @details Destructeur de la classe BarreCarre
 */

BarreCarre::~BarreCarre()
{
    //cout << "Destructeur de la classe BarreCarre" << endl;
    cout << "\n" << endl;
}


