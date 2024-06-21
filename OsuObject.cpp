//
// Created by adamt on 13.6.2024.
//

#include "OsuObject.h"

OsuObject::OsuObject(const int offs) {
    this->offset = offs;
}

OsuObject::OsuObject() {
    this->offset = -1;
}


int OsuObject::getOffset() const {
    return this->offset;
}

void OsuObject::setOffest(const int offs) {
    this->offset = offs;
}



