#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <iostream>
#include <iomanip>

using namespace std;

class Exception
{
private:
    int codeErreur;
    string message;
public:
    Exception(int _codeErreur, string _message);
    int ObtenirCodeErreur() const;
    string ObtenirDescription() const;
};

#endif // EXCEPTION_H
