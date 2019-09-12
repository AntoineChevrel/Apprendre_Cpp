/*
#include <iostream>
#include "ipv4.h"


using namespace std;

void AfficherTableau(unsigned char *tab)
{
    for(int indice=0;indice<4;indice++)
    {
        cout<<(int)tab[indice];
        if(indice<3)cout<<".";
    }
    cout<<endl;
}
*/
/*
 * **************************************************************************************
 * Notion  d'encapsulation
 *
int main()
{
    unsigned char adresse[4]={162,168,1,1};
    unsigned char masque[4];
    unsigned char reseau[4];
    unsigned char diffusion[4];

    IPv4 uneAdresse(adresse,24);

    //instanciation de la classe IPv4

    cout<<"AdresseIPv4:";
    AfficherTableau(adresse);
    uneAdresse.ObtenirMasque(masque);//appel d'une méthode
    cout<<"Masque:";
    AfficherTableau(masque);
    uneAdresse.ObtenirAdresseReseau(reseau);
    cout<<"Réseau:";
    AfficherTableau(reseau);
    uneAdresse.ObtenirAdressedDiffusion(diffusion);
    cout<<"Diffusion:";
    AfficherTableau(diffusion);

   return 0;
}
*************************************************************************************f
*/
/*
int main()
{
    unsigned char adresse[4]={162,168,1,1};
    unsigned char reseau[4];

    IPv4*uneAdresse=new IPv4(adresse,24); //instanciation de la classe IPv4
    IPv4 adresseCopie=*uneAdresse;//l'instance est recopiée dans une autre

    cout<<"Adresse réseau avant: ";
    adresseCopie.ObtenirAdresseReseau(reseau);
    AfficherTableau(reseau);

    delete uneAdresse; //destruction de la première instance

    cout<<"Adresse réseau après destruction: ";
    adresseCopie.ObtenirAdresseReseau(reseau);
    AfficherTableau(reseau);

    return 0;
}
*/
#include <iostream>
#include <menu.h>

using namespace std;

int main()
{
    int choix;

    Menu leMenu("menu.txt");
    do
    {
        choix = leMenu.Afficher();
        switch (choix)
        {
           case OPTION_1:
           cout << "vous avez choisie l'option n° " << choix <<endl;
           Menu::AttendreAppuiTouche();
           break;

           case OPTION_2:
           cout << "vous avez choisie l'option n° " << choix <<endl;
           Menu::AttendreAppuiTouche();
           break;

           case OPTION_3:
           cout << "vous avez choisie l'option n° " << choix <<endl;
           Menu::AttendreAppuiTouche();
           break;

           case OPTION_4:
           cout << "vous avez choisie l'option n° " << choix <<endl;
           Menu::AttendreAppuiTouche();
           break;

           case QUITTER:
           cout << "vous avez choisie l'option n° " << choix <<endl;
           Menu::AttendreAppuiTouche();
           break;
        }
    }while(choix != QUITTER);

    return 0;
}
