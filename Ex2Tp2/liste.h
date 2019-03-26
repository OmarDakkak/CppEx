/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   liste.h
 * Author: macbookpro
 *
 * Created on March 26, 2019, 1:41 PM
 */

#ifndef LISTE_H
#define LISTE_H

class liste {
private:
    int *T;
    int max1;
public:
    liste();
    liste(int);
    liste(const liste& orig);
    virtual ~liste();
    void saisie();
    void affiche();
    liste& operator =(const liste &);
};

#endif /* LISTE_H */

