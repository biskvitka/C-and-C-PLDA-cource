/* 
 * File:   main.cpp
 * Author: ggrozeva
 *
 * Created on September 10, 2015, 10:10 AM
 */

#include <cstdlib>
#include<iostream>
#include "point.hpp"

using namespace std;

int main(int argc, char** argv) {
    
    Point *p = NULL;
    int *px, *py;
    p = new Point(12,56);
    p->draw();
    delete p;
    //----------------
    px = new int(67);
    py = new int[5];
    return 0;
}

