///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#include "rectangle.h"
#include <iostream> 


CRectangle::CRectangle() : CForme() {
    this->largeur = 0;
    this->longueur = 0;
}


CRectangle::CRectangle(std::string _nom, int _largeur, int _longueur) : CForme(_nom) {
    this->largeur = _largeur;
    this->longueur = _longueur;
}


CRectangle::~CRectangle() {
}


void CRectangle::afficher() {
    
    std::cout << "Rectangle : " << nom << " | Dim : " << largeur << "x" << longueur << std::endl;
}


double CRectangle::surface() {
    return (double)largeur * longueur;
}