///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#include "OctogoneRegulier.h"
#include <cmath> 
#include <iostream>
#include <string>


COctogoneRegulier::COctogoneRegulier() : CForme("Octogone Inconnu") {
    this->cote = 0;
}
COctogoneRegulier::COctogoneRegulier(std::string _nom, int _cote) : CForme(_nom) {
    this->cote = _cote;
}

COctogoneRegulier::~COctogoneRegulier() {
}

void COctogoneRegulier::afficher() {
   
    std::cout << "Nom : " << nom << " | Type : Octogone | Cote : " << cote << std::endl;
}

double COctogoneRegulier::surface() {
    return 2.0 * (1.0 + sqrt(2.0)) * cote * cote;
}