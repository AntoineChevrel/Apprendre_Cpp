/**
  *@file barreronde.cpp
  *@brief implémentation de la classe BarreRonde
  *@version 1.1
  * @author Antoine CHEVREL
  * @date 20 septembre 2019
  */


#include "barreronde.h"
#include <math.h>

/**
 *@brief BarreRonde::BarreRonde
 *@details constructeur de la classe BarreRonde
 *@param _ref indique une chaîne de caractère (la référence de la barre, ex.: "20-15")
 *@param _longueur prend la valeur d'un entier
 *@param _diametre prend la valeur d'un entier
 *@param _densite prend la valeur d'un entier
 *@param _nom indique une chaîne de caractère (le nom de la barre, ex.: "Bronze")
 */

BarreRonde::BarreRonde(string _ref, int _longueur, int _diametre, float _densite, string _nom):
    Barre (_ref, _longueur, _densite, _nom),
    diametre(_diametre)
{
    //cout << "Constructeur de la classe BarreRonde" << endl;

    cout << "LA BARRE RONDE :" << endl;

    cout << "La référence est : " << ref << endl;
    cout << "La longueur est de : " << longueur << " cm" << endl;
    cout << "Le diamêtre est de : " << diametre << endl;
    cout << "La densité est de : " << densite << endl;
    cout << "Le Nom de l'alliage est : " << nom << endl;
}

/**
 * @brief BarreRonde::CalculerSection
 * @details Renvoi le calcul de la section (aire) de la barre
 */

double BarreRonde::CalculerSection()
{
    return (M_PI*(diametre*diametre))/4;
}

/**
 * @brief BarreRonde::CalculerMasse
 * @details Renvoi le calcul de la masse de la barre
 */

float BarreRonde::CalculerMasse()
{
    return longueur*BarreRonde::CalculerSection()*densite;
}

/**
 * @brief BarreRonde::~BarreRonde
 * @details Destructeur de la classe BarreRonde
 */

BarreRonde::~BarreRonde()
{
    //cout << "Destructeur de la classe BarreRonde" << endl;
}
