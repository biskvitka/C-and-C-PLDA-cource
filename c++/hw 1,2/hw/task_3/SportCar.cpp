#include "SportCar.hpp"
#include <iostream>

using namespace std;

SportCar::SportCar(string color, string model, int yearModel, int speed):Car(color, model, yearModel){
    this->speed = speed;
    cout<<"Constr.SportCar"<<endl;
}

SportCar::~SportCar(){
    cout<<"Distr.SportCar"<<endl;
}

void SportCar::setSpeed(int speed){
    this->speed = speed;
}

int SportCar::getSpeed(){
    return speed;
}

void SportCar::print()const{
    Car::print();
    cout<<"Speed : "<<speed<<" km\\h\n"<<endl;
}