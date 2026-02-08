///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#ifndef OCTOGONEREGULIER_H
#define OCTOGONEREGULIER_H

#include "forme.h"
#include <string> 

class COctogoneRegulier : public CForme
{
public:
	COctogoneRegulier();
	virtual ~COctogoneRegulier();

	// Utilisation de std::string indispensable pour corriger C2061
	COctogoneRegulier(std::string _nom, int _cote);

	void afficher() override;
	double surface() override;

private:
	int cote;
};

#endif