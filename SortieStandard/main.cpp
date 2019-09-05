#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>


using namespace std;
/*
 **********************************************************************************************************************************************************************************************************************************
 * a) et b) Exercice affichage dans le terminal d'un fichier TxT : medaille.txt
 *
int main()
{
    string  nomDuFichier;
    cout<<"Entrer le nom du fichier à lire:";
    cin>>nomDuFichier;

    ifstream leFichier(nomDuFichier.c_str());

    if(!leFichier .is_open())
        cerr<<"Erreur lors de l'ouverture du fichier"<<endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;

        cout<< "+" << setfill('-') << setw(18) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< endl;

        do
        {
            leFichier >> pays >>nbOr >> nbArgent >> nbBronze;
            if(leFichier.good())
            {
                cout << "|" << setw(17) << left << pays << right << "|" << setw(8) << nbOr << "|" << setw(8) << nbArgent << "|" << setw(8) << nbBronze << "|" << endl;
            }
        }while(!leFichier.eof());
        cout<< "+" << setfill('-') << setw(18) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" << setfill(' ')<< endl;
    }
    return 0;
}
*
* *********************************************************************************************************************************************************************************************************************************
*/


/*
 **********************************************************************************************************************************************************************************************************************************
 * c) Exercice affichage dans fichier TxT du fichier : medaille.txt
 *

int main()
{
    string  nomDuFichier;
    string nomDuFichier2;

    cout<<"Entrer le nom du fichier à lire: ";
    cin>>nomDuFichier;

    cout<<"Entrer le nom du fichier où écrire: ";
    cin>>nomDuFichier2;

    ifstream leFichier(nomDuFichier.c_str());
    ofstream leFichier2(nomDuFichier2.c_str());
    if(!leFichier .is_open())
        cerr<<"Erreur lors de l'ouverture du fichier"<<endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;

        leFichier2<< "+" << setfill('-') << setw(18) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< endl;

        do
        {
            leFichier >> pays >>nbOr >> nbArgent >> nbBronze;
            if(leFichier.good())
            {
                leFichier2 << "|" << setw(17) << left << pays << right << "|" << setw(8) << nbOr << "|" << setw(8) << nbArgent << "|" << setw(8) << nbBronze << "|" << endl;
            }
        }while(!leFichier.eof());
        leFichier2<< "+" << setfill('-') << setw(18) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" << setfill(' ')<< endl;
    }

    return 0;
}
 **********************************************************************************************************************************************************************************************************************************
 *
*/

/*
int main()
{


    cout<<"avant l'appel de Ajouter"<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;



    cout<<"après l'appel de Ajouter"<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;

    return 0;
}
*/
