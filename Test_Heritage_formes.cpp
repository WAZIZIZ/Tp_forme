#include <iostream>
#include <vector>
#include "forme.h"
#include "rectangle.h"
#include "carre.h"

using namespace std;

int main() {
    
    vector<CForme*> mesFormes;

    
    mesFormes.push_back(new CRectangle("MonRectangle", 10, 5));
    mesFormes.push_back(new CCarre("MonCarre", 4));

    cout << "===== PARTIE 6 : HERITAGE INDIRECT (RECTANGLE & CARRE) =====" << endl;

   
    for (CForme* f : mesFormes) {
        f->afficher();
        
        cout << "Surface : " << f->surface() << endl;
        cout << "---------------------------------" << endl;
    }

    
    for (CForme* f : mesFormes) {
        delete f;
    }
    mesFormes.clear();

    return 0;
}