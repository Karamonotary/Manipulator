//
// Created by Алиса on 06.05.2021.
//

#ifndef OOP_MANIPULATOR_V_3_0_BARRIER_H
#define OOP_MANIPULATOR_V_3_0_BARRIER_H

#include "td_map.h"

class Barrier: public MapObject {
    int mov; //! вляется подвижным или нет

public:
    //! создать в указанной точке
    Barrier(int x, int y, double mass, double leght, double width, double angle,  int point_force_x,  int point_force_y, double  force, int m):
            MapObject(x, y, mass, leght,  width, angle, point_force_x, point_force_y, force), mov(m) {}
    //! сдвиг на указанные величины по x и y
    //! \param dx предлагаемое изменение координаты x
    //! \param dx предлагаемое изменение координаты y
    void move_on(int dx, int dy);

    //! печать отладочной информации о препятствии
    void print() const;
    //! вывод препятствия на карту
    void show() const {
        printf("m");
    }
    //! создание копии
    Barrier* clone() const {
        return new Barrier(get_x(), get_y(), get_mass(),get_leght(),get_width(),get_angle(),get_point_force_x(), get_point_force_y(), get_force(),mov);
    }
};


#endif //OOP_MANIPULATOR_V_3_0_BARRIER_H
