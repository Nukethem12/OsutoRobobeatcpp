//
// Created by adamt on 13.6.2024.
//

#ifndef OSUTIMINGPOINT_H
#define OSUTIMINGPOINT_H
#include "OsuObject.h"


class OsuTimingPoint : OsuObject{
public:
    OsuTimingPoint();
    OsuTimingPoint(int offs, double bpm);
    double bpm;
    double getBpm() const;

private:
    void setBpm(double bpm);

};



#endif //OSUTIMINGPOINT_H
