/* 
 * File:   AbstractCar.hpp
 * Author: ggrozeva
 *
 * Created on September 12, 2015, 3:52 PM
 */

#ifndef ABSTRACTCAR_HPP
#define	ABSTRACTCAR_HPP
class AbstractCar{
public:
    ~AbstractCar(){}
    virtual void print() const = 0;
    
};


#endif	/* ABSTRACTCAR_HPP */

