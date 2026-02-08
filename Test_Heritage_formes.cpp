#include <iostream>
#include <vector>
#include "forme.h"
#include "rectangle.h"
#include "carre.h"
#include "cercle.h" 

using namespace std;

int main() {

    vector<CForme*> mesFormes;

   
    mesFormes.push_back(new CRectangle("MonRectangle", 10, 5));
    mesFormes.push_back(new CCarre("MonCarre", 4));
    mesFormes.push_back(new CCercle("MonCercle", 5.0)); 

    cout << "===== PARTIE 7 : AJOUT D'UNE NOUVELLE FORME (CERCLE) =====" << endl;

 
    for (CForme* f : mesFormes) {
        f->afficher();
        cout << "Surface : " << f->surface() << endl;
        cout << "---------------------------------" << endl;
    }

    
    for (CForme* f : mesFormes) {
        delete f;
    }
    mesFormes.clear();

   
    cout << "Appuyez sur Entree pour quitter..." << endl;
    cin.get();

    return 0;
}