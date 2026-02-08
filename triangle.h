///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#if !defined(EA_27FAED55_15DC_44a5_A411_D9FB4F259080__INCLUDED_)
#define EA_27FAED55_15DC_44a5_A411_D9FB4F259080__INCLUDED_

#include "forme.h"

class CTriangle : public CForme
{
public:
	CTriangle();

	~CTriangle(); 
	CTriangle(string nom, int _hauteur, int _base);

	void afficher(); 
	double surface(); 
private:
	int base;
	int hauteur;
};

#endif // !defined(EA_27FAED55_15DC_44a5_A411_D9FB4F259080__INCLUDED_)
