///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#include "triangle.h"
#include <iostream>

CTriangle::CTriangle() : CForme("Triangle inconnu") {
    this->hauteur = 0;
    this->base = 0;
}

CTriangle::~CTriangle() {}


CTriangle::CTriangle(std::string nom, int _hauteur, int _base)
    : CForme(nom) {
    this->hauteur = _hauteur;
    this->base = _base;
}

void CTriangle::afficher() {
    
    std::cout << "Nom : " << nom << " | Base : " << base << " | Hauteur : " << hauteur << std::endl;
}

double CTriangle::surface() {
    
    return (base * hauteur) / 2.0;
}