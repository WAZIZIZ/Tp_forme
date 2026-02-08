#ifndef CERCLE_H
#define CERCLE_H

#include "forme.h"

class CCercle : public CForme {
public:
    CCercle();
    CCercle(std::string _nom, double _rayon);
    virtual ~CCercle();

    void afficher() override;
    double surface() override;

private:
    double rayon;
};

#endif
