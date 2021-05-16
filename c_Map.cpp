//
// Created by Алиса on 16.05.2021.
//

#include "td_map.h"
#include "manipulator.h"
#include "barrier.h"

extern "C"
{
Map* create_map(int size_x, int size_y, int basa_x, int basa_y)
{
    return new Map(size_x, size_y, basa_x,basa_y);
}
MapObject* create_barrier(int x, int y, double mass, double leght, double width, double angle,int point_force_x,  int point_force_y, double  force,  int mov)
{
    return new Barrier(x, y, mass, leght, width, angle, point_force_x,  point_force_y,   force, mov);

}

MapObject* create_component_manipulator(int x, int y, double mass, double leght, double width, double angle,int point_force_x,  int point_force_y, double  force,  int number)
{
    return new Manipulator( x,  y, mass, leght, width,  angle, point_force_x,  point_force_y,   force,  number);

}

void add_new_object(Map* mp,MapObject* obj)
{
    mp->add_object(obj);
}

void print_information(Map* mp)
{   printf("Print inform\n");
    mp->print();
}

void show_map(Map* mp)
{ printf("Show inform\n");

    mp->show();
}
void delete_map(Map* mp)
{
    delete mp;
}
}
