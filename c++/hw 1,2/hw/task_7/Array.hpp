/* 
 * File:   Array.hpp
 * Author: ggrozeva
 *
 * Created on September 14, 2015, 11:19 AM
 */

#ifndef ARRAY_HPP
#define	ARRAY_HPP
#include <iostream>
using namespace std;

class Array{
public:
    Array(int size = 5);
    ~Array();
    
    int getSize() const;
    int &operator[](int );
    
    Array &operator+(const Array &other);
    bool operator==(const Array &other) const;
    friend ostream &operator<<(ostream &cout, Array &arr);
    
    
private:
    int size;
    int *data;
};


#endif	/* ARRAY_HPP */

