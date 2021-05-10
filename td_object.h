//
// Created by Алиса on 06.05.2021.
//

#ifndef OOP_MANIPULATOR_V_3_0_TD_OBJECT_H
#define OOP_MANIPULATOR_V_3_0_TD_OBJECT_H


#include<list>

#include<cstdio>

using std::list;


//! класс "Объект на карте"
class MapObject{
    int id;
    int x;  //!< координата x
    int y;  //!< координата y
    double mass; //!mass >=0
    double leght;  //!  >=0
    double width;  //! >=0
    int angle; //!угол оси относительно вертикали
    int point_force_x;  //!точка приложения силы (на объекте)
    int point_force_y;
    double force;   //!приложенная сила

    static int id_source;

protected:
    // перемещение объекта сделано
    // protected, чтобы наследники могли
    // при необходимости двигаться
    //! перемещение в заданную точку
    //! \param x координата x цели
    //! \param y координата y цели
    void move_to(int x, int y, double mass, double leght, double width, double angle,  int point_force_x,  int point_force_y, double  force) {
        this->x = x;
        this->y = y;
        this->angle = angle;
    }

public:

    // конструктор по умолчанию не нужен
    // (потому что неясно, как задавать координаты)
    //! конструктор по координатам
    //! \param x координата x объекта
    //! \param y координата y объекта
    MapObject(int x, int y, double mass, double leght, double width, double angle,int point_force_x,  int point_force_y, double  force):  id(id_source++), x(x), y(y), mass(mass),

                                                                            leght(),width(),angle(), point_force_x(),point_force_y(),force(){}

    //! копирующий конструктор. Обеспечивает
    //! уникальность идентификатора
    MapObject(const MapObject&obj):
            id(id_source++), x(obj.x), y(obj.y) {}

    //! получение координаты x
    //! \return координата
    int get_x() const;
    //! получение координаты y
    //! \return координата
    int get_y() const {
        return y;
    }

    double get_mass() const {
        return mass;
    }
    double get_leght() const {
        return leght;
    }
    double get_width() const {
        return width;
    }
    int get_angle() const {
        return angle;
    }

    int get_point_force_x() const {
        return point_force_x;
    }
    int get_point_force_y() const {
        return point_force_y;
    }
    int get_force() const {
        return force;
    }

    //! вывод для отладки карты(исправить потом)
    virtual void print() const;
    //! вывод для консольного представления карты.
    //! Объект представляется одной буквой
    virtual void show() const = 0;
    //! создание копии текущего объекта
    //! \return копия объекта
    //!    (независимо от типа)
  //  virtual MapObject* clone() const = 0;

    virtual ~MapObject();
};



#endif //OOP_MANIPULATOR_V_3_0_TD_OBJECT_H
