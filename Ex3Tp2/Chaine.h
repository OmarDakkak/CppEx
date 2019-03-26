/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Chaine.h
 * Author: macbookpro
 *
 * Created on March 26, 2019, 2:03 PM
 */

#ifndef CHAINE_H
#define CHAINE_H

class Chaine {
private:
    char *ch;
    int length;
public:
    Chaine();
    Chaine(const Chaine& orig);
    Chainr(char*);
    virtual ~Chaine();


};

#endif /* CHAINE_H */

