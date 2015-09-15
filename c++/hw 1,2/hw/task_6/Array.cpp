#include "Array.hpp"
#include <cstdlib>
#include <iostream>
#include <cstring>
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



Array &Array::operator+(const Array &other){
    
    int *tmp = new int[size + other.size];
    
    memmove( tmp, data, sizeof *data * size);
    memmove(tmp + size, other.data, sizeof *other.data * other.size);
    
    delete [] data;
    
    data = tmp;
    size += other.size;
   
    return *this;
 }



    bool Array::operator==(const Array &other) const{
        
        if( size == other.size){
            
            for(int i = 0; i < size; i++){
         
                if( data[i] != other.data[i]){
                    return false;
                }
                
            }
            return true;
        }
        return false;
    }
    
    ostream &operator<<(ostream &cout, Array &arr){
        for(int i = 0; i < arr.getSize(); i++){
            std::cout<<"["<< i << "]="<< arr[i]<<std::endl;
        }
        return cout;
    }