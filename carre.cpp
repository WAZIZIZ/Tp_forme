///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////
#include "carre.h"
#include <iostream>

CCarre::CCarre() : CRectangle("Carre inconnu", 0, 0), cote(0) {}

CCarre::~CCarre() {}


CCarre::CCarre(int _cote) : CRectangle("Carre", _cote, _cote), cote(_cote) {}


void CCarre::afficher() {
    CRectangle::afficher();
    cout << "Cote specifique : " << cote << endl;
}

double CCarre::surface() {
    return CRectangle::surface(); 
}