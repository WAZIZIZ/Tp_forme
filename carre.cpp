///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////
#include "carre.h"
#include <iostream>

// Constructeur par défaut
CCarre::CCarre() : CRectangle("Carre Inconnu", 0, 0) {
    this->cote = 0;
}

// Constructeur avec paramètre (Note : On a ajouté std::string dans le .h)
CCarre::CCarre(std::string _nom, int _cote) : CRectangle(_nom, _cote, _cote) {
    this->cote = _cote;
}

CCarre::~CCarre() {}

void CCarre::afficher() {
    // On peut appeler CRectangle::afficher() car elle n'est pas virtuelle pure
    // Mais il est plus propre d'afficher directement les infos du carré
    std::cout << "Nom : " << nom << " | Type : Carre | Cote : " << cote << std::endl;
}

double CCarre::surface() {
    // On réutilise le calcul du rectangle (cote * cote)
    return CRectangle::surface();
}