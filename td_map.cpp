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
#include "td_object.h"

using std::list;


Map::Map(int size_x, int size_y,
         int basa_x, int basa_y): size_x(size_x), size_y(size_y) {



}
void Map::show() const {
    // начальная строка
    printf("+");
    for (int y=0; y < size_y; ++y)  //размер карты по у
        printf("-");
    printf("+\n");
    // для каждой точки
    list<MapObject *>::iterator it;
    for (int x = 0; x < size_x; ++x) {        //  размер карты по х
        printf("|");
        for (int y = 0; y < size_y; ++y) {

            for (auto it = objects.begin(); it != objects.end(); ++it)
                if(it.operator*() -> get_x()==x && it.operator*()-> get_y()==y)  //ищем точку основы объекта
                { //printf("*");
//                    int angle = it.operator*() -> get_angle();                 //получаем угол наклона оси и длину
//                    double length = it.operator*() -> get_leght();
//                    int i1=x; int j1 = y;
//                         for(int i = i1; i<=floor(i1+length*cos(angle));i++) {
//                             x++;
//                             for (int j = j1; j <= floor(j1+ length * sin(angle)); j++) {
//                                 y++;
//
//                             }
//                         }
                    printf("*");
                  // x=i1; y = j1;
                }
                else

            printf(" ");
            }

        printf("|\n");
    }

    //}
    printf("|\n");
    // конечная строка
    printf("+");

    for (int y = 0; y < size_y; ++y)
        printf("-");
    printf("+\n");
    if (objects.empty())  //проверка, есть ли объекты
        printf(" No \n");
}

void Map::print() const {
    printf("printM\n");
    // перебираем все объекты карты
    list<MapObject *>::iterator it;
    for (auto it : objects){
        it -> print();
        printf("printO\n");
    }
}

void Map::add_object(MapObject *obj) {
    printf("Object is add\n");
    list<MapObject *>::iterator it;

    for (auto it = objects.begin(); it != objects.end(); ++it) {  //!сравнение по координатам основания с новым объектом
        if ((it.operator*()->get_x() == obj->get_x()) && (it.operator*()->get_y() == obj->get_y())) {
            printf("It's not unique object\n");
            return;                   //! выход из функции, если объект не удовлетворяет условию
        }
    }
    objects.push_back(obj);
}

Map::~Map() {
    list<MapObject *>::iterator it;
    for(auto it = objects.begin(); it != objects.end(); ++it) {  //!освобождение памяти
        delete *it;
    }
    //for(auto it : objects) {
    //	delete *it;
    //}

}
