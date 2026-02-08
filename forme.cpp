///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#include "forme.h"


CForme::CForme() {
    this->nom = "Inconnu";
}

CForme::CForme(string _nom) {
    this->nom = _nom;
}

CForme::~CForme() {
}

void CForme::afficher() {
    cout << "Nom de la forme : " << nom << endl;
}

double CForme::surface() {
    return 0;
}