///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#include "forme.h"
CForme::CForme() {
    nom = "Inconnu";
}


CForme::~CForme() {
}


CForme::CForme(string _nom) {
    nom = _nom;
}


void CForme::afficher() {
    cout << "Nom de la forme : " << nom << endl;
}


double CForme::surface() {
    return 0;
}