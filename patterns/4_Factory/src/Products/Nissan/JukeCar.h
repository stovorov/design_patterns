//
// Created by Pawel Stoworowicz.
// Contact: pawel.stoworowicz@gmail.com
// MIT license
//

#ifndef DESIGN_PATTERN_JUKECAR_H
#define DESIGN_PATTERN_JUKECAR_H

#include "NissanCar.h"

class JukeCar: public NissanCar {
public:
    using NissanCar::NissanCar;
    void drive();
};

#endif //DESIGN_PATTERN_JUKECAR_H
