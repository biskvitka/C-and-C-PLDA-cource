/* 
 * File:   car.hpp
 * Author: ggrozeva
 *
 * Created on September 11, 2015, 2:44 PM
 */

#ifndef CAR_HPP
#define	CAR_HPP
#include "AbstractCar.hpp"
#include <string>
using namespace std;
class Car: public AbstractCar{
    
public:
    Car ( string color = ("Yellow"), string model= ("Lada"), int yearModel= 1985);
    ~Car();
    Car (const Car &ob);
    
    void setColor ( string color);
    void setModel ( string model);
    void setYearModel ( int yearModel);
    
    string getColor ();
    string getModel ();
    int getYearModel ();
    
    virtual void print() const;
    
    friend ostream &operator<<(ostream &, const Car &);
    friend istream &operator>>(istream &, Car &);
private:
    string color, model;
    int yearModel;
    
    
    
};


#endif	/* CAR_HPP */

