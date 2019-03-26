/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   liste.cpp
 * Author: macbookpro
 * 
 * Created on March 26, 2019, 1:41 PM
 */

#include "liste.h"
#include <iostream>
using namespace std;

liste::liste() {
    max1=10;
    T=new int[max1];
}

liste::liste(const liste& orig) {
    max1=orig.max1;
    T=new int[max1];
    for(int i=0;i<orig.max1;i++){
        T[i]=orig.T[i];
    }
}
liste::liste(int a){
   max1=a;
   T=new int[max1];
}
liste::~liste() {
    delete[] T;
}
void liste::saisie(){
    for(int i=0;i<max1;i++){
        cin>>T[i];
    }
}
void liste::affiche(){
    cout<<"la longueur est : "<<max1<<endl;
    cout<<"la liste est :"<<endl;
    for(int i=0;i<max1;i++){
        cout<<T[i]<<"\t";
    }
    cout<<"\n";   
}
liste& liste::operator=(const liste& comp){
    delete T;
    max1=comp.max1;
    T=new int[max1];
    for(int i=0;i<comp.max1;i++){
        T[i]=comp.T[i];
    } 
    return *this;
}
/*
    A a,b; 
 A c(a); par copie
 A c=a; par copie
 A *c=new A(b); par copie
 void f(A a) par copie
 A f2(){
 * 
 * 
 return jkjgsjj;
  } par copie
  
 */
/*
 * A a,b;
 * a=b; affectation
 */