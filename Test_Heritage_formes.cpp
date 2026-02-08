#include <iostream>
#include "forme.h"
#include "rectangle.h"
#include "carre.h"
#include "triangle.h"
#include "octogoneRegulier.h"

#include <iostream>
#include "forme.h"
#include "rectangle.h"

    int main() {
        // AJOUTE CETTE LIGNE :
        CForme maForme("Test");

        // Garde le reste de ton code en dessous
        CForme* ptr = new CRectangle("MonRect", 10, 5);
        // ...
    }