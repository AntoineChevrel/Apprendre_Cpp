#include "carton.h"

Carton::Carton(const int _largeur, const int _hauteur, const int _profondeur, const float _poidsMaxi):
    Contenant(_largeur,_hauteur,_profondeur),
    poidsMaxi(_poidsMaxi)
{
    cout << " Constructeur de la classe Carton" << endl;
    cout << "largeur : " << largeur << endl;
    cout << " hauteur : " << hauteur << endl;
    cout << "profondeur : " << profondeur << endl;
}

float Carton::ObtenirPodsMaxi()
{
    return poidsMaxi;
}

Carton::~Carton()
{
    cout << "Destructeur de la classe Carton" << endl;
}
