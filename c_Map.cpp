//
// Created by Алиса on 16.05.2021.
//

#include "td_map.h"

extern "C"
{
Map* create_map(int size_x, int size_y, int basa_x, int basa_y)
{
    std::list<MapObject*>objects;
    return new Map(size_x, size_y, basa_x,basa_y);
}
MapObject* create_object(int x, int y, double mass, double leght, double width, double angle,int point_force_x,  int point_force_y, double  force)
{
    return new MapObject(int x, int y, double mass, double leght, double width, double angle,int point_force_x,  int point_force_y, double  force)

}

void add_object(Map* mp,MapObject* obj)
{
    mp->add_object(obj);
}

void print_information(Map* mp)
{   printf("Print inform\n")
    mp->print();
}

void show_map(Map* mp)
{ printf("Show inform\n")

    mp->show();
}
void delete_map(Map* mp)
{
    delete mp;
}
}
