#ifndef RAIZ_H
#define RAIZ_H
#include "Criatura.h"


class Raiz : public Criatura {
private:
    int vidaPower;
public:
    Raiz();

    Raiz(int x, int y, int v, int d, int r, int h, int vidaPower);

    int getVidaPower() const;

    void setVidaPower(int cantidad);
};



#endif //RAIZ_H
