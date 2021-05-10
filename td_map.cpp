//
// Created by Алиса on 06.05.2021.
//
#include<cmath>
#include<cstring>
#include<cassert>
#include<algorithm>
#include<list>
#include <iterator>
#include <iostream>

#include "td_map.h"


using std::list;


Map::Map(int size_x, int size_y,
         int basa_x, int basa_y): size_x(size_x), size_y(size_y) {


}


void Map::print() const {
    // перебираем все объекты карты
    list<MapObject *>::iterator it;
    for (auto it : objects)
   it -> print();
}

bool Map::add_object(MapObject *obj) {
    list<MapObject *>::iterator it;
    for (auto it : objects)
        if(it != obj)
       objects.push_back(obj);
        else  printf("It's not unique object");
}

Map::~Map() {
    list<MapObject *>::iterator it;
    for(it = objects.begin(); it != objects.end(); ++it) {
        delete *it;
    }
    //for(auto it : objects) {
    //	delete *it;
    //}

}
