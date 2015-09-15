/* 
 * File:   main.cpp
 * Author: ggrozeva
 *
 * Created on September 11, 2015, 2:40 PM
 */

#include <cstdlib>
#include "car.hpp"
#include "SportCar.hpp"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    SportCar m;
    m.print();
    
    SportCar a("4erna ", "mamba", 1992, 150);
    a.print();
    return 0;
}

