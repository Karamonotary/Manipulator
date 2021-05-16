//
// Created by Алиса on 16.05.2021.
//
#include "c_Map.cpp"

Map* create_map(int size_x, int size_y, int basa_x, int basa_y);

MapObject* create_object(int x, int y, double mass, double leght, double width, double angle,int point_force_x,  int point_force_y, double  force);

void add_new_object(Map* mp,MapObject* obj);

void print_information(Map* mp);

void show_map(Map* mp);

void delete_map(Map* mp);

int main(){
Map* mp;
MapObject* obj;

mp = create_map(10,10,1,1);

obj = create_barrier(5, 5, 10, 2, 2, 90,  6, 6,10, 1);

add_new_object(mp,obj);

    obj = create_component_manipulator(7, 7, 10, 2, 2, 90,  6, 6,10, 1);


    add_new_object(mp,obj);

print_information(mp);

show_map(mp);

delete_map(mp);

return 1;
}