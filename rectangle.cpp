///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#include "rectangle.h"
#include <iostream> // Indispensable pour std::cout et std::endl

// Constructeur par défaut
CRectangle::CRectangle() : CForme() {
    this->largeur = 0;
    this->longueur = 0;
}

// Constructeur avec paramètres
CRectangle::CRectangle(std::string _nom, int _largeur, int _longueur) : CForme(_nom) {
    this->largeur = _largeur;
    this->longueur = _longueur;
}

// Destructeur
CRectangle::~CRectangle() {
}

// Implémentation de la méthode afficher
void CRectangle::afficher() {
    // Note : on utilise 'nom' qui est hérité de CForme
    std::cout << "Rectangle : " << nom << " | Dim : " << largeur << "x" << longueur << std::endl;
}

// Implémentation du calcul de la surface
double CRectangle::surface() {
    return (double)largeur * longueur;
}