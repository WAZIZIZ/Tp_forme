///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#include "OctogoneRegulier.h"
#include <iostream>
#include <cmath>

COctogoneRegulier::COctogoneRegulier() : CForme("Octogone inconnu"), cote(0) {}

COctogoneRegulier::~COctogoneRegulier() {}


COctogoneRegulier::COctogoneRegulier(string _nom, int _cote)
    : CForme(_nom), cote(_cote) {
}


void COctogoneRegulier::afficher() {
    CForme::afficher();
    cout << "Cote de l'octogone : " << cote << endl;
}


double COctogoneRegulier::surface() {
    return 2 * (1 + sqrt(2)) * cote * cote;
}