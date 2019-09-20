/**
  *@file barre.cpp
  *@brief implémentation de la classe Barre
  *@version 1.1
  * @author Antoine CHEVREL
  * @date 20 septembre 2019
  */

#include "barre.h"

/**
  *@brief Barre::Barre
  *@details Constructeur de la classe Barre,
  * affecte les attributs de références, de longueur, de densité et le nom de la barre.
  *@param _ref indique une chaîne de caractère (la référence de la barre, ex.: "20-15")
  *@param _longueur prend la valeur d'un entier
  *@param _densite prend la valeur d'un entier
  *@param _nom indique une chaîne de caractère (le nom de la barre, ex.: "Bronze")
  */

Barre::Barre(string _ref, int _longueur, float _densite, string _nom):
    ref(_ref), longueur(_longueur), densite(_densite), nom(_nom)
{
    //cout << "Constructeur de la classe Barre" << endl;

    cout << " \n " << endl;
}

/**
 * @brief Barre::AfficherCaracteristiques
 * @details Affiche les données contenues dans les variables
 */

void Barre::AfficherCaracteristiques()
{
    cout << "Référence : " << ref << endl;
    cout << "Longueur : " << longueur << endl;
    cout << "Densité : " << densite << endl;
    cout << "Nom : " << nom << endl;
}

/**
 * @brief Barre::~Barre
 * @details Destructeur de la classe Barre
 */

Barre::~Barre()
{
    //cout << "Destructeur de la classe Barre" << endl;
}
