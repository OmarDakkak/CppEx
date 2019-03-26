/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: macbookpro
 *
 * Created on March 26, 2019, 1:40 PM
 */

#include <cstdlib>
#include <iostream>
#include "liste.h"

using namespace std;


int main(int argc, char** argv) {
    liste a(3);
    a.saisie(); 
    liste b;
    b=a;
    a.affiche();
    b.affiche();
    return 0;
}

