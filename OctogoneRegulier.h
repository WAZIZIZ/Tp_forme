///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#if !defined(EA_F4AA348A_CB84_4bda_BB01_CEB429BA389A__INCLUDED_)
#define EA_F4AA348A_CB84_4bda_BB01_CEB429BA389A__INCLUDED_

#include "forme.h"

class COctogoneRegulier : public CForme
{
public:
	COctogoneRegulier();

	~COctogoneRegulier(); 

	void afficher(); 

	
	COctogoneRegulier(string _nom, int _cote);

	double surface(); 

private:
	int cote;
};

#endif // !defined(EA_F4AA348A_CB84_4bda_BB01_CEB429BA389A__INCLUDED_)