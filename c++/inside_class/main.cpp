/* 
 * File:   main.cpp
 * Author: ggrozeva
 *
 * Created on September 10, 2015, 10:10 AM
 */

#include <cstdlib>
#include<iostream>
#include "point.hpp"
#include "shape.hpp"

using namespace std;

int main(int argc, char** argv) {
    Shape *sh[3] = {
        new Point(10,20),
        new Point(32, 231)
    };
    
    for (int i = 0; i < 2; i++){
        sh[i]->moveTo(100, 100);
    }
    
    for (int i = 0; i < 2; i++){
        delete sh[i];
    }
}

