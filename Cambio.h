#ifndef CAMBIO_H
#define CAMBIO_H
#include "Criatura.h"


class Cambio : public Criatura {
private:
    int adaptacionPower;

public:
    Cambio();

    Cambio(int x, int y, int v, int d, int r, int h, int adaptacionPower);

    int getAdaptacionPower() const;

    void setadaptacionPower(int cantidad);
};



#endif //CAMBIO_H
