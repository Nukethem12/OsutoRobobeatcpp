//
// Created by adamt on 13.6.2024.
//

#include "OsuTimingPoint.h"

OsuTimingPoint::OsuTimingPoint(int offs, double bpm) : OsuObject(offs) {
    this->bpm = bpm;
}

OsuTimingPoint::OsuTimingPoint() : OsuObject() {
    this->bpm = -1;
}


double OsuTimingPoint::getBpm() const {
    return this->bpm;
}

void OsuTimingPoint::setBpm(double bpm) {
    this->bpm = bpm;
}

