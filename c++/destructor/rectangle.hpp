/* 
 * File:   rectangle.hpp
 * Author: ggrozeva
 *
 * Created on September 11, 2015, 10:47 AM
 */

#ifndef RECTANGLE_HPP
#define	RECTANGLE_HPP
#include "point.hpp"
class Rectangle: public Point{
public:
    Rectangle();
    Rectangle(int , int , int , int );
    ~Rectangle();
    void draw();
    
        
        
private:
    int width, height;        
};


#endif	/* RECTANGLE_HPP */

