#ifndef CHAINE_H
#define CHAINE_H

#include <iostream>
using namespace std;

class chaine
{

private :
    int longueur;
    char *adr; //string s
public:
    chaine();
    chaine(char *texte);
    chaine(const chaine &ch);  //constructeurs
    ~chaine();
    chaine& operator=(const chaine &ch);
    int operator==(chaine ch);
    chaine &operator+(chaine ch);
    char &operator[](int i);
    void affiche();

friend ostream& operator << (ostream& sortie, const chaine & ch);
};

#endif // CHAINE_H
