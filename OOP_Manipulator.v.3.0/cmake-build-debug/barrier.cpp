//
// Created by Алиса on 06.05.2021.
//

#include "barrier.h"
void Barrier::print() const {
    printf("Barrier, damage=%i, max_dist=%i",
           mov);
    MapObject::print();
}