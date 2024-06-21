//
// Created by adamt on 15.6.2024.
//

#ifndef OSUSV_H
#define OSUSV_H
#include "OsuObject.h"


class OsuSV : private OsuObject {
public:
    double sliderVel;
    OsuSV(int offset, double slidVel);
    double getSV() const;

private:
    void setSV(double slidVel);

};



#endif //OSUSV_H
