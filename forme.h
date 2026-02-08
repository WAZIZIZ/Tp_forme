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

class CForme {
public:
    CForme();
    CForme(std::string _nom);
    virtual ~CForme();

    
    virtual void afficher() = 0;
    virtual double surface() = 0;

protected:
    
    std::string nom;
};

#endif