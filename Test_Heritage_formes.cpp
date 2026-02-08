#include <iostream>
#include "forme.h"
#include "rectangle.h"
#include "triangle.h"
#include "carre.h"
#include "octogoneRegulier.h"

int main() {
   
    CForme* maForme;
    maForme = new CRectangle("Mon Rectangle Test", 10, 5);

    std::cout << "--- TEST POINTEUR CLASSE MERE ---" << std::endl;
    std::cout << "Surface via pointeur : " << maForme->surface() << std::endl;
    delete maForme;
    std::cout << std::endl;

    std::cout << "--- TESTS TOUTES LES FORMES (CONSIGNE 6) ---" << std::endl;

    // Rectangle
    CRectangle rect("Rectangle_A", 12, 4);
    rect.afficher();
    std::cout << "Surface : " << rect.surface() << std::endl << std::endl;

    // Triangle
    CTriangle tri("Triangle_B", 10, 5);
    tri.afficher();
    std::cout << "Surface : " << tri.surface() << std::endl << std::endl;

    // Carré
    CCarre carr(8); 
    carr.afficher();
    std::cout << "Surface : " << carr.surface() << std::endl << std::endl;

    // Octogone
    COctogoneRegulier octo("Octogone_C", 4);
    octo.afficher();
    std::cout << "Surface : " << octo.surface() << std::endl;

    return 0;
}