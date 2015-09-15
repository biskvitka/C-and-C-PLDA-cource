#include "car.hpp"
#include <iostream>

using namespace std;

Car::Car(char* color, char* model, int yearModel){
    this->color = color;
    this->model = model;
    this->yearModel = yearModel;
    cout<<"Constr.Car"<<endl;
}

Car::~Car(){
    cout<<"Destr.Car"<<endl;
}

void Car::setColor(char* color){
    this->color = color;
}

void Car::setModel(char* model){
    this->model = model;
}

void Car::setYearModel( int yearModel){
    this->yearModel = yearModel;
}

char* Car::getColor(){
    return color;
}

char* Car::getModel(){
    return model;
}

int Car::getYearModel(){
    return yearModel;
}

void Car::print(){
    cout<<color<<" "<<model<<" from "<<yearModel<<" year"<<endl; 
}
