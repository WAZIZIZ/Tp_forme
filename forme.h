///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#if !defined(EA_C6A867D6_1E90_4f6f_9136_67255E5B0D6C__INCLUDED_)
#define EA_C6A867D6_1E90_4f6f_9136_67255E5B0D6C__INCLUDED_

#include <string>
#include <iostream> 
using namespace std;

class CForme
{
public:
	CForme();
	~CForme(); 

	CForme(string _nom);
	void afficher();

	double surface(); 

protected: 
	string nom;
};

#endif // !defined(EA_C6A867D6_1E90_4f6f_9136_67255E5B0D6C__INCLUDED_)
