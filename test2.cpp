//
// Created by Алиса on 08.05.2021.
//
#include<cstdio>
#include "td_map.h"

#include "barrier.h"
#include "manipulator.h"


void test_Barrier1(){
    Barrier b1(5, 5, 10, 2, 2, 90,  6, 6,10, 1);
   b1.move_onB(7,7);
    printf("testB\n");
    b1.print();
}
void test_Manipulator1(){
    Manipulator m1(20, 20, 10, 4, 4, 0,  6, 6,10, 1);
    printf("testM\n");
    m1.print();
    m1.move_onM(1,1);
}


int main() {
   test_Barrier1();
   test_Manipulator1();

    Map mp(21,21,1,1);

    mp.add_object(new Barrier(7, 7, 10, 1, 2, 90,  6, 6,10, 1) );
    mp.add_object(new Manipulator(10, 10, 10, 10, 2, 0,  6, 6,10, 1) );
    printf(" \n");
    mp.add_object(new Manipulator(1, 10, 10, 10, 2, 90,  6, 6,10, 1) );
    printf(" \n");
    mp.add_object(new Manipulator(10, 1, 10, 5, 2, 90,  6, 6,10, 1) );
    printf(" \n");
    mp.add_object(new Manipulator(10, 1, 10, 5, 2, 90,  6, 6,10, 1) );
    //printO();
    mp.show();
    mp.print();
    printf("testMain \n");
}

