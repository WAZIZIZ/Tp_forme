///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////
#include "carre.h"
#include <iostream>


CCarre::CCarre() : CRectangle("Carre Inconnu", 0, 0) {
    this->cote = 0;
}


CCarre::CCarre(std::string _nom, int _cote) : CRectangle(_nom, _cote, _cote) {
    this->cote = _cote;
}

CCarre::~CCarre() {}

void CCarre::afficher() {
    
    std::cout << "Nom : " << nom << " | Type : Carre | Cote : " << cote << std::endl;
}

double CCarre::surface() {
    
    return CRectangle::surface();
}