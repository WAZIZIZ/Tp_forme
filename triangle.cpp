///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#include "triangle.h"
#include <iostream>

// Utilisation de std:: devant string, cout et endl pour éviter les erreurs
CTriangle::CTriangle() : CForme("Triangle inconnu") {
    this->hauteur = 0;
    this->base = 0;
}

CTriangle::~CTriangle() {}

// Correction de la signature avec std::string
CTriangle::CTriangle(std::string nom, int _hauteur, int _base)
    : CForme(nom) {
    this->hauteur = _hauteur;
    this->base = _base;
}

void CTriangle::afficher() {
    // MODIFICATION PARTIE 4 : On ne peut plus appeler CForme::afficher() 
    // car elle est virtuelle pure (= 0)
    std::cout << "Nom : " << nom << " | Base : " << base << " | Hauteur : " << hauteur << std::endl;
}

double CTriangle::surface() {
    // Calcul de la surface d'un triangle
    return (base * hauteur) / 2.0;
}