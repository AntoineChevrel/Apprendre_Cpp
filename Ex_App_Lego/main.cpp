#include <iostream>
#include "barre.h"
#include "barrecarre.h"
#include "barrerectangle.h"
#include "barreronde.h"

using namespace std;

int main()
{
    //Barre laBarre("85-674",15,27,"Acier");
    //laBarre.AfficherCaracteristiques();

    BarreCarre laBarreCarre("103-68",20,25,"Laiton");
    cout << "La section de la barre carré est : " << laBarreCarre.CalculerSection() << endl;
    cout << "La Masse de la barre carré est : " << laBarreCarre.CalculerMasse() << endl;

    BarreRectangle laBarreRectangle("54-08",10,5,20,"Nickel");
    cout << "La section de la barre rectangle est : " << laBarreRectangle.CalculerSection() << endl;
    cout << "La Masse de la barre rectangle est : " << laBarreRectangle.CalculerMasse() << endl;

    BarreRonde laBarreRonde("10-98",40,25,30,"billon");
    cout << "La section de la barre ronde est : " << laBarreRonde.CalculerSection() << endl;
    cout << "La Masse de la barre ronde est : " << laBarreRonde.CalculerMasse() << endl;

    return 0;
}
