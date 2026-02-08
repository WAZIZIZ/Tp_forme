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

CForme::CForme(std::string _nom) {
    this->nom = _nom;
}

CForme::~CForme() {
}

// On ne met RIEN pour afficher() et surface() ici.