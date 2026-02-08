///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#ifndef FORME_H
#define FORME_H

#include <string>
#include <iostream>
using namespace std;

class CForme {
public:
    CForme();               
    CForme(string _nom);
    virtual ~CForme();      

    virtual void afficher();  
    virtual double surface(); 

protected:
    string nom;
};

#endif