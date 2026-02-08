///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#if !defined(EA_27FAED55_15DC_44a5_A411_D9FB4F259080__INCLUDED_)
#define EA_27FAED55_15DC_44a5_A411_D9FB4F259080__INCLUDED_

#include "forme.h"
#include <string> // Nécessaire pour std::string

class CTriangle : public CForme
{
public:
	CTriangle();
	virtual ~CTriangle();

	// Utilisation de std::string pour corriger l'erreur E0020
	CTriangle(std::string nom, int _hauteur, int _base);

	// override confirme l'implémentation des méthodes virtuelles pures de CForme
	void afficher() override;
	double surface() override;

private:
	int base;
	int hauteur;
};

#endif // !defined(EA_27FAED55_15DC_44a5_A411_D9FB4F259080__INCLUDED_)
