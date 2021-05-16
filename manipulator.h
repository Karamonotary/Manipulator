//
// Created by Алиса on 06.05.2021.
//

#ifndef OOP_MANIPULATOR_V_3_0_MANIPULATOR_H
#define OOP_MANIPULATOR_V_3_0_MANIPULATOR_H

#include "td_object.h"

//! описание
class Manipulator: public MapObject {
    int number;  //!< номер звена


public:
    //! создать в указанной точке
    Manipulator(int x, int y, double mass, double leght, double width, double angle,  int point_force_x,  int point_force_y, double  force, int h):
            MapObject(x, y, mass, leght,  width, angle, point_force_x,  point_force_y,  force), number(h) {}
    //! сдвиг на указанные величины по x и y
    //! \param dx предлагаемое изменение координаты x
    //! \param dx предлагаемое изменение координаты y
    void move_on(int dx, int dy);

    //! печать отладочной информации о препятствии
    void print() const;
    //! вывод на карту
    void show() const {
        printf("m");
    }
    void move_onM(int dx, int dy) ;

    //! создание копии
   Manipulator* clone() const {
       return new Manipulator(get_x(), get_y(), get_mass(),get_leght(),get_width(),get_angle(), get_point_force_x(), get_point_force_y(), get_force(),number);
    }
};



#endif //OOP_MANIPULATOR_V_3_0_MANIPULATOR_H
