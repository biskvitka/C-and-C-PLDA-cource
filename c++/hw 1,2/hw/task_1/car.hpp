/* 
 * File:   car.hpp
 * Author: ggrozeva
 *
 * Created on September 11, 2015, 2:44 PM
 */

#ifndef CAR_HPP
#define	CAR_HPP
class Car{
    
public:
    Car ( char *color= "Yellow", char *model= "Lada", int yearModel= 1985);
    ~Car();
    
    void setColor ( char *color);
    void setModel ( char *model);
    void setYearModel ( int yearModel);
    
    char *getColor ();
    char *getModel ();
    int getYearModel ();
    
    void print();
    
private:
    char *color, *model;
    int yearModel;
    
    
    
};


#endif	/* CAR_HPP */

