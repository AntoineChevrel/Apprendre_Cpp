#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

class Menu
{
private:
     std::string nom;
     std::string *option;
    unsigned int nbOptions;
    int longueurMax;

public:
    Menu(const std::string &_nom);
    int Afficher();
    static void AttendreAppuiTouche();
    ~Menu();
};

enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2 = 2,
    OPTION_3 = 3,
    OPTION_4 = 4,
    QUITTER
};

#endif // MENU_H
