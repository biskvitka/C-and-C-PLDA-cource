/* 
 * File:   SportCar.hpp
 * Author: ggrozeva
 *
 * Created on September 11, 2015, 3:33 PM
 */

#ifndef SPORTCAR_HPP
#define	SPORTCAR_HPP
#include "car.hpp"
class SportCar: public Car{
public:
    
    SportCar( char *color= "Yellow", char *model= "Lada", int yearModel= 1985, int speed = 90);
    ~SportCar();
    
    void setSpeed( int speed);
    
    int getSpeed();
    using Car::print;
    virtual void print() const;
private:
    int speed;
};


#endif	/* SPORTCAR_HPP */

