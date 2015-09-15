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
        Array arr1, arr2;
    
    for(int i=0 ; i< arr1.getSize(); i++)
    {
        arr1[i] = arr2[i] = std::rand()%100;
    }
    cout<<endl<<arr1.getSize()<<endl;
    
    if( arr1 == arr2 )
    {
        std::cout<<arr1<<" == "<<arr2;
    }
    std::cout<<"-------------------------------------------"<<std::endl;
    arr1 = arr1 + arr2;
    
    for( int i = 0; i < arr1.getSize() ; i++ )
    {
        std::cout<<arr1;
    }
    cout<<endl<<arr1.getSize()<<endl;
    return 0;
}

