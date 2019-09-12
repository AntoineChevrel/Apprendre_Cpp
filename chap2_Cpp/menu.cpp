#include "menu.h"

Menu::Menu(const std::string &_nom):nom(_nom), longueurMax(0)
{
    nom= _nom;

    ifstream fichierMenu(nom.c_str());

    if(fichierMenu .fail())
    {
        cerr << "Erreur lors de l'ouverture du fichier : " << nom << endl;
        nbOptions = 0;
    }
    else
    {
        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(fichierMenu),istreambuf_iterator<char>(),'\n'));
        fichierMenu.seekg(0,ios::beg);
        option = new string[nbOptions];
        for (unsigned int i =0; i < nbOptions ; i++)
        {
            std::getline(fichierMenu, option[i]);
                    if(option[i].length() > longueurMax)
                longueurMax = option[i].length();

        }
    }
}

int Menu::Afficher()
{
    int choix;
    if(nbOptions == 0)
    {
        choix = -1;
    }else {
        cout << setfill('-');
        cout << "+-" << setw(4) << "-+-" <<setw(longueurMax + 2) << "+" << endl;
        cout<<setfill(' ');
        for (unsigned int i = 0; i < nbOptions; i++)
        {
            cout << "| " << i << " | " << setw(longueurMax) << option[i] << " |" << endl;
        }
        cout << setfill('-');
        cout << "+-" << setw(4) << "-+-" << setw(longueurMax + 2) << "-+" << endl;
        cout << setfill(' ');
       do
        {
            cout << "Votre choix entre 0 et  " << nbOptions - 1 << endl;
            cin >> choix;
        }while(choix != nbOptions-1);
    }


    return choix;
}

void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl <<"Appuyer sur la touche Entrée pour continuer ";
    getline(cin,uneChaine);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    system("clear");
}

Menu::~Menu()
{
    delete option;
}
