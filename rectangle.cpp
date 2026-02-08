///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#include "rectangle.h"
#include <iostream>

CRectangle::CRectangle() : CForme("Rectangle inconnu"), largeur(0), longueur(0) {}

CRectangle::CRectangle(string nom, int _largeur, int _longueur) 
    : CForme(nom), largeur(_largeur), longueur(_longueur) {}

CRectangle::~CRectangle() {}


void CRectangle::afficher() {
    CForme::afficher();
    cout << "Largeur : " << largeur << " | Longueur : " << longueur << endl;
}


double CRectangle::surface() {
    return (double)largeur * longueur;
}