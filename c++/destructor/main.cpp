/* 
 * File:   main.cpp
 * Author: ggrozeva
 *
 * Created on September 10, 2015, 10:10 AM
 */

#include <cstdlib>
#include<iostream>
#include "point.hpp"
#include "rectangle.hpp"
using namespace std;

int main(int argc, char** argv) {
    
    Point *pn = NULL;
    pn = new Rectangle(12, 324, 21, 9);
    pn->draw();
    delete pn;
    
    
    
    return 0;
}

