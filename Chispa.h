#ifndef CHISPA_H
#define CHISPA_H
#include "Criatura.h"


class Chispa : public Criatura{
private:
    int rapidezPower;
public:
    Chispa();

    Chispa(int x, int y, int v, int d, int r, int h, int rapidezPower);

    int getRapidezPower() const;

    void setRapidezPower(int cantidad);
};



#endif //CHISPA_H
