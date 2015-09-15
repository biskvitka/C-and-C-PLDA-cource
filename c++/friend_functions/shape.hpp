/* 
 * File:   shape.hpp
 * Author: ggrozeva
 *
 * Created on September 12, 2015, 10:23 AM
 */

#ifndef SHAPE_HPP
#define	SHAPE_HPP

class Shape{
public:
    virtual void moveTo(int, int) = 0;
    virtual void redraw() = 0;
    virtual void resize(int, int) = 0;
    virtual ~Shape(){}
    
};


#endif	/* SHAPE_HPP */

