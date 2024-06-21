//
// Created by adamt on 13.6.2024.
//

#include <fstream>
#include "OsuMap.h"

OsuMap::OsuMap(std::string path, bool fromMap) {
    this->fromMap = fromMap;
    if (fromMap) {
        readFromMap(&path);
    } else {
        readFromTiming(&path);
    }
}

void OsuMap::readFromMap(std::string *path) {

}

void OsuMap::readFromTiming(std::string *path) {
    std::ifstream ifs;
    ifs.open(*path, std::ifstream::in);

    std::string line;

    

}



