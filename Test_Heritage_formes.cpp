#include <iostream>
#include "forme.h"
#include "rectangle.h"

#include "triangle.h"
#include "carre.h"
#include "octogoneRegulier.h"

int main() {

    
    CForme* maForme;

    
    maForme = new CRectangle("Mon Rectangle Test", 10, 5);

    
    std::cout << "--- PARTIE 2 : COMPORTEMENT OBSERVE ---" << std::endl;
    std::cout << "Tentative d'affichage de la surface via le pointeur CForme* :" << std::endl;

    
    std::cout << "Surface obtenue : " << maForme->surface() << std::endl;

   
    delete maForme;

    return 0;
}