///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#if !defined(EA_E8659249_0B9C_491f_BC3B_764BEC26D8C9__INCLUDED_)
#define EA_E8659249_0B9C_491f_BC3B_764BEC26D8C9__INCLUDED_

#include "forme.h"


class CRectangle : public CForme
{
public:
	CRectangle();
	
	CRectangle(string _nom, int _largeur, int _longueur);

	 
	~CRectangle();

	
	void afficher();
	double surface();

private:
	int largeur;
	int longueur;
};

#endif