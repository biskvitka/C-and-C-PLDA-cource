/* 
 * File:   SportCar.hpp
 * Author: ggrozeva
 *
 * Created on September 11, 2015, 3:33 PM
 */

#ifndef SPORTCAR_HPP
#define	SPORTCAR_HPP
#include "car.hpp"
#include <string>
class SportCar: public Car{
public:
    
    SportCar( string color= "Yellow", string model= "Lada", int yearModel= 1985, int speed = 90);
    ~SportCar();
    
    void setSpeed( int speed);
    
    int getSpeed();
    using Car::print;
    virtual void print() const;
private:
    int speed;
};


#endif	/* SPORTCAR_HPP */

