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
    Point a(21,32);
    cin>>a;
    cout<<a;
    Point b;
    cin>>b;
    if(a>b){
        cout<<a<<">"<<b<<endl;
    }
    else{
        cout<<a<<"<="<<b<<endl;
    }
    return 0;
}

