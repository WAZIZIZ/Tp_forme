///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#include "triangle.h"
#include <iostream>

CTriangle::CTriangle() : CForme("Triangle inconnu"), hauteur(0), base(0) {}

CTriangle::~CTriangle() {}


CTriangle::CTriangle(string nom, int _hauteur, int _base)
    : CForme(nom), hauteur(_hauteur), base(_base) {
}


 
void CTriangle::afficher() {
    CForme::afficher();
    cout << "Base : " << base << " | Hauteur : " << hauteur << endl;
}


 
double CTriangle::surface() {
    return (base * hauteur) / 2.0;
}