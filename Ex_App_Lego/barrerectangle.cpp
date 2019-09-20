/**
  *@file barrerectangle.cpp
  *@brief implémentation de la classe BarreRectangle
  *@version 1.1
  * @author Antoine CHEVREL
  * @date 20 septembre 2019
  */

#include "barrerectangle.h"

/**
 *@brief BarreRectangle::BarreRectangle
 *@details constructeur de la classe BarreRectangle
 *@param _ref indique une chaîne de caractère (la référence de la barre, ex.: "20-15")
 *@param _longueur prend la valeur d'un entier
 *@param _largeur prend la valeur d'un entier
 *@param _densite prend la valeur d'un entier
 *@param _nom indique une chaîne de caractère (le nom de la barre, ex.: "Bronze")
 */

BarreRectangle::BarreRectangle(string _ref, int _longueur, int _largeur, float _densite, string _nom):
    Barre (_ref, _longueur, _densite, _nom),
    largeur(_largeur)
{
    //cout << "Constructeur de la classe BarreRectangle" << endl;

    cout << "LA BARRE RECTANGLE :" << endl;

    cout << "La référence est : " << ref << endl;
    cout << "La longueur est de : " << longueur << " cm" << endl;
    cout << "La largeur est de : " << largeur << endl;
    cout << "La densité est de : " << densite << endl;
    cout << "Le Nom de l'alliage est : " << nom << endl;
}

/**
 * @brief BarreRectangle::CalculerSection
 * @details Renvoi le calcul de la section (aire) de la barre
 */

float BarreRectangle::CalculerSection()
{
    return longueur*largeur;
}

/**
 * @brief BarreRectangle::CalculerMasse
 * @details Renvoi le calcul de la masse de la barre
 */

float BarreRectangle::CalculerMasse()
{
    return longueur*BarreRectangle::CalculerSection()*densite;
}

/**
 * @brief BarreRectangle::~BarreRectangle
 * @details Destructeur de la classe BarreRectangle
 */

BarreRectangle::~BarreRectangle()
{
    //cout << "Destructeur de la classe BarreRectangle" << endl;
}
