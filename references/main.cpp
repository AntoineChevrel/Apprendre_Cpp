#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

void Ajouter(int a, int b ,int c){
    c= a+b;
}

void Ajouter1(int a, int b ,int *c){
    *c= a+b;
}

void Ajouter2(int a, int b ,int &c){
    c= a+b;
}

int main(){
    int a=1;
    int b=-2;
    int c=0;

    cout<<"avant l'appel de Ajouter"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;

    //Appelle la fonction Ajouter à compléter dans le tableau suivant le cas.

    Ajouter(a,b,c);
    //Ajouter1(a,b,&c);
    //Ajouter2(a,b,c);

    cout<<"après l'appel de Ajouter"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;

    return 0;
}
