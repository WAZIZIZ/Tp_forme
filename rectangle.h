///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>  // Ajout indispensable pour reconnaître std::string
#include "forme.h"

class CRectangle : public CForme {
public:
    CRectangle();
    CRectangle(std::string _nom, int _largeur, int _longueur);
    virtual ~CRectangle(); // virtual ajouté pour la sécurité du destructeur

    // override confirme que tu implémentes les méthodes virtuelles pures de CForme
    void afficher() override;
    double surface() override;

private:
    int largeur;
    int longueur;
};

#endif