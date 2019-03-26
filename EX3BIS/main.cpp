#include <iostream>
#include "chaine.h"

using namespace std;

int main()
{
    chaine a("Bonjour "),  b("Mohammed"),c, d("Bonjour "),e;

    if(a==b)
        cout<<"Gagne !\n";
    else
        cout<<"Perdu !\n";
    if(a==d)
        cout<<"Gagne !\n";
    else
        cout<<"Perdu !\n";
    cout<<"a: ";
    a.affiche();
    cout<<"b: ";
    b.affiche();
    cout<<"d: ";
    d.affiche();

    c = a+b;
    cout<<"c: ";
    c.affiche();

    for(int i=0; c[i]!='\0'; i++)
        cout<<c[i];

        cout<<"   "<<endl;

        cout<<c;
    return 0;
}

