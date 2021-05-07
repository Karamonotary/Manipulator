//
// Created by Алиса on 06.05.2021.
//
#ifndef OOP_MANIPULATOR_V_3_0_TD_MAP_H
#define OOP_MANIPULATOR_V_3_0_TD_MAP_H

#include<list>

#include<cstdio>
#include "td_object.h"

using std::list;

class Map {
    list<MapObject *> objects;
    //    int id; //!< идентификатор
    int size_x;  //!< размер карты по координате x
    int size_y;  //!< размер карты по координате y
    //! идентификатор крепления манипулятора для облегчения поисков
    int с_id;
public:
    //! конструктор, создающий карту заданного размера
    Map(int size_x, int size_y,
        int basa_x, int basa_y);

    //! вывод отладочной текстовой информации о карте
    void print() const;

    int get_objects_number() const {
        return objects.size();}

    //!  добавление на карту объекта.
    //! Объект переходит в собственность карты.
    //! \param obj указатель на добавляемый объект
    //! \return true, если объект добавлен на карту
    bool add_object(MapObject *obj);

    Map(const Map &m);

    //! перегруженное присваивание
    //! \param m присваиваемый объект
    Map &operator=(const Map &m);

    //! деструктор
    ~Map();
    //! выдача указателя на объект карты

};
#endif //OOP_MANIPULATOR_V_3_0_TD_MAP_H
