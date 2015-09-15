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
 
    
    Point a;
    a.draw();
    
    a.setX(5);
    a.setY(6);
    a.setVisible(true);
    
    a.draw();
    Point b(4,8);
    b.draw();
    return 0;
}

