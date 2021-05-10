//
// Created by Алиса on 08.05.2021.
//

#include<cstdio>
#include<cassert>

#include "td_map.h"
#include "td_object.h"
#include "barrier.h"
#include "manipulator.h"

void test_Barrier1();

void test_Manipulator1();

int main() {
   test_Barrier1();
   test_Manipulator1();

    Map mp(40,40,1,1);

    mp.add_object(new Barrier(7, 7, 10, 1, 2, 90,  6, 6,10, 1) );
    mp.add_object(new Manipulator(10, 10, 10, 5, 2, 90,  6, 6,10, 1) );
    mp.print();
}

void test_Barrier1(){
    Barrier b1(5, 5, 10, 2, 2, 90,  6, 6,10, 1);
    // b1.move_to(7,7);
    printf("testB");
}
void test_Manipulator1(){
    Manipulator m1(20, 20, 10, 4, 4, 0,  6, 6,10, 1);
    // m1.move_to(1,1);
    printf("testM");
}