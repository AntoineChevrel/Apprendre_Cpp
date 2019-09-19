#include "barre.h"




Barre::Barre(string _ref, int _longueur, float _densite, string _nom):
    ref(_ref), longueur(_longueur), densite(_densite), nom(_nom)
{
    cout << "Constructeur de la classe Barre" << endl;
}

void Barre::AfficherCaracteristiques()
{
    cout << "Référence : " << ref << endl;
    cout << "Longueur : " << longueur << endl;
    cout << "Densité : " << densite << endl;
    cout << "Nom : " << nom << endl;
}

Barre::~Barre()
{
    cout << "Destructeur de la classe Barre" << endl;
}
