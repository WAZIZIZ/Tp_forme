#include "cercle.h"
#include <iostream>

CCercle::CCercle() : CForme("Cercle inconnu") {
    this->rayon = 0;
}

CCercle::CCercle(std::string _nom, double _rayon) : CForme(_nom) {
    this->rayon = _rayon;
}

CCercle::~CCercle() {}

void CCercle::afficher() {
    std::cout << "Nom : " << nom << " | Type : Cercle | Rayon : " << rayon << std::endl;
}

double CCercle::surface() {
    return 3.14159 * rayon * rayon;
}