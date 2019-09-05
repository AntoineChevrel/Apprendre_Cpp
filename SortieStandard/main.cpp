#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string  nomDuFichier;
    cout<<"Entrer le nom du fichier à lire:";
    cin>>nomDuFichier;

    ifstream leFichier(nomDuFichier.c_str());
    if(!leFichier .is_open())cerr<<"Erreur lors de l'ouverture du fichier"<<endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;

        do
        {
            leFichier >> pays >>nbOr >> nbArgent >> nbBronze;
            if(leFichier.good())
            {

            }
        }while(!leFichier.eof());
    }
    return 0;
}

