//
// Created by Алиса on 06.05.2021.
//

#include "manipulator.h"

void   Manipulator::move_on(int dx, int dy) {
    move_to(get_x() + dx, get_y() + dy);
}

void   Manipulator::print() const {
    printf("  Manipulator, = %i, %i", parts);
    MapObject::print();
}