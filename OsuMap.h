//
// Created by adamt on 13.6.2024.
//

#ifndef OSUMAP_H
#define OSUMAP_H
#include <string>
#include <vector>
#include "OsuTimingPoint.h"


class OsuMap {


public:
    bool fromMap{};
    std::string id;
    std::string title;
    std::string artist;
    int lastObjectTime{};

private:
    std::vector<OsuTimingPoint> mTimingPoints;

public:
    OsuMap(std::string path, bool fromMap);

private:
    void readFromMap(std::string *path);
    static void readFromTiming(std::string *path);
    std::vector<int> getSliderTimings(std::vector<std::string> *objectData, double sliderMulti, double sliderVel, double bpm);
};



#endif //OSUMAP_H
