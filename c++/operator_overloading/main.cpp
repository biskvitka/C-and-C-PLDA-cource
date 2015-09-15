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
#include "Array.hpp"

using namespace std;

int main(int argc, char** argv) {
    Array arr(10);
    for(int i = 0; i < arr.getSize(); i++){
        arr[i] = rand() % 100;
    }
    arr[100] = 1;
    for (int i = 0; i < arr.getSize(); i++){
        cout<<"arr["<< i <<"] = "<<arr[i]<<endl;
    }
    
    return 0;
}

