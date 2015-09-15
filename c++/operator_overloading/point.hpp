/* 
 * File:   point.hpp
 * Author: ggrozeva
 *
 * Created on September 10, 2015, 11:50 AM
 */

#ifndef POINT_HPP
#define	POINT_HPP
#include "shape.hpp"

class Point: public Shape{

public:
    ~Point();
    Point (int = 0, int = 0 );
    void setX ( int x);
    void setY ( int y);
    void setVisible(bool a);
    
    int getX ();
    int getY ();
    bool isVisible();
    
    void draw();
    
    virtual void moveTo(int , int);
    virtual void redraw();
    virtual void resize(int, int){}

    Point &operator+(const Point &ro);
    Point &operator++();
    
    bool operator>(const Point &op);
private:
    int x,y;
    bool visible;
    Point *next; //it can be ONLY pointer

};


#endif	/* POINT_HPP */

