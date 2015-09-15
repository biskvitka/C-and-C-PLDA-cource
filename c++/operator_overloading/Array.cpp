#include "Array.hpp"
#include <cstdlib>
#include <iostream>

Array::Array(int size):size(size), data(NULL){
    data = new int[size];
}

Array::~Array(){
    delete [] data;
}

int Array::getSize() const{
    return size;
}

int &Array::operator[](int idx){
    if (idx , 0 || idx >= getSize()){
        std::cout<<"Invalid index ("<<idx<<")"<<std::endl;
        delete [] data;
        std::exit(0);
    }
    
    return data[idx];
}