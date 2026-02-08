///////////////////////////////////////////////////////////
//  forme.h
//  Implementation of the Class CForme
//  Created on:      8-fev.-2026 12:19:36
//  Original author: Enzo Mouny
///////////////////////////////////////////////////////////

#if !defined(EA_CAB04089_B088_4860_A714_D5B6EA6C5D52__INCLUDED_)
#define EA_CAB04089_B088_4860_A714_D5B6EA6C5D52__INCLUDED_

#include "rectangle.h"
#include <string>

class CCarre : public CRectangle
{
public:
	CCarre();
	virtual ~CCarre();

	CCarre(std::string _nom, int _cote);

	void afficher() override;

	

private:
	int cote;
};

#endif // !defined(EA_CAB04089_B088_4860_A714_D5B6EA6C5D52__INCLUDED_)
