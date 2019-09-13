
/**
  *@file menu.h
  *@brief Définition de la classe Menu
  *@version 1.1
  *@author Antoine CHEVREL
  *@date 13/09/2019
  */

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
    OPTION_2 ,
    OPTION_3 ,
    OPTION_4 ,
    QUITTER
};

#endif // MENU_H
