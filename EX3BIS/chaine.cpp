#include "chaine.h"

chaine::chaine()
{
    longueur = 0;    //constructeur1
    adr = new char[1];
}

chaine::chaine(char *texte)   // constructeur2
{ int i;
    for( i=0; texte[i]!='\0'; i++); //strcpy(adr,texte);
    longueur =i; cout<<"longueur :"<<i<<endl;

    adr = new char[longueur+1];
    for(int i=0; i!=(longueur+1); i++)
        adr[i] = texte[i];
}

chaine::chaine(const chaine &ch) //constructeur par recopie
{
    longueur = ch.longueur; cout<<"longueur :"<<longueur<<endl;
    adr = new char[longueur];
    for(int i=0; i!=(longueur+1); i++)
        adr[i] = ch.adr[i];
}

chaine & chaine::operator=(const chaine &ch)
{
    delete adr;
    longueur = ch.longueur;
    adr = new char[ch.longueur+1];
    for(int i=0; i!=(longueur+1); i++)
        adr[i] = ch.adr[i];
        return *this;
}

int chaine::operator==(chaine ch)
{if(longueur!=ch.longueur)return 0;
else
{
    int res=1;

    for(int i=0; (i!=(longueur+1))&&(res!=0); i++)
        if(adr[i]!=ch.adr[i])
            res=0;
    return res;
}

}

chaine &chaine::operator+(chaine ch)
{
    static chaine res;
    res.longueur = longueur + ch.longueur;
    res.adr = new char[res.longueur+1];
    for(int i=0; i!=longueur; i++)
        res.adr[i] = adr[i];
    for(int i=0; i!=ch.longueur; i++)
        res.adr[i+longueur] = ch.adr[i];
    res.adr[res.longueur]='\0';
    return(res);
}

char &chaine::operator[](int i)
{
    static char res='\0';
    if(longueur!=0)
        res =  *(adr+i);
    return res;
}

chaine::~chaine()
{
    delete []adr;
}

void chaine::affiche()
{
    for(int i=0; i!=longueur; i++)
        cout<<adr[i];
    cout<<"\n";
}
 ostream& operator << (ostream& sortie, const chaine & ch)
    {
        for(int i=0; i!=ch.longueur; i++)
            sortie<<ch.adr[i];
        sortie<<endl;
        return sortie;
    }
