/* 
 * File:   point.hpp
 * Author: ggrozeva
 *
 * Created on September 10, 2015, 11:50 AM
 */

#ifndef POINT_HPP
#define	POINT_HPP


class Point{

public:
    virtual ~Point();
    Point (int = 0, int = 0 );
    void setX ( int x);
    void setY ( int y);
    void setVisible(bool a);
    
    int getX ();
    int getY ();
    bool isVisible();
    
    virtual void draw();
    
    
private:
    int x,y;
    bool visible;
    Point *next; //it can be ONLY pointer

};


#endif	/* POINT_HPP */

