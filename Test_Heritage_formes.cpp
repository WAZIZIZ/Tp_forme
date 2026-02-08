#include <iostream>
#include <vector>
#include "rectangle.h"
#include "carre.h"
#include "triangle.h"
#include "octogoneRegulier.h"

int main() {
    
    std::vector<CForme*> mesFormes;

    
    mesFormes.push_back(new CRectangle("Rect1", 10, 5));
    mesFormes.push_back(new CCarre("Carre1", 4));
    mesFormes.push_back(new CTriangle("Tri1", 3, 6));
    mesFormes.push_back(new COctogoneRegulier("Octo1", 2));

    std::cout << "--- PARTIE 5 : POLYMORPHISME ---" << std::endl;

   
    for (CForme* f : mesFormes) {
        f->afficher(); 
        std::cout << "Surface : " << f->surface() << std::endl;
        std::cout << "---------------------------------" << std::endl;
    }

   
    for (CForme* f : mesFormes) {
        delete f;
    }
    mesFormes.clear();

    return 0;
}