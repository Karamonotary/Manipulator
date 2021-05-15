//
// Created by Алиса on 06.05.2021.
//
#include<cstdio>
#include "td_object.h"

int MapObject::id_source = 0;



void MapObject::printO() const {
    printf("MapObject::print %i - x, %i - y \n",x,y);

}
MapObject::~MapObject() {}
