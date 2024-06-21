//
// Created by adamt on 15.6.2024.
//

#include "OsuSV.h"

OsuSV::OsuSV(int offset, double slidVel) : OsuObject(offset) {
    this->sliderVel = slidVel;
}

double OsuSV::getSV() const {
    return this->sliderVel;
}

void OsuSV::setSV(double slidVel) {
    this->sliderVel = slidVel;
}


