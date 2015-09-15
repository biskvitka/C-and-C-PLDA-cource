#include "car.hpp"
#include <iostream>

using namespace std;

Car::Car(string color, string model, int yearModel){
    this->color = color;
    this->model = model;
    this->yearModel = yearModel;
    cout<<"Constr.Car"<<endl;
}

Car::~Car(){
    cout<<"Destr.Car"<<endl;
}

Car::Car (const Car &ob){
    color = ob.color;
    model = ob.model;
    yearModel = ob.yearModel;
}

void Car::setColor(string color){
    this->color = color;
}

void Car::setModel(string model){
    this->model = model;
}

void Car::setYearModel( int yearModel){
    this->yearModel = yearModel;
}

string Car::getColor(){
    return color;
}

string Car::getModel(){
    return model;
}

int Car::getYearModel(){
    return yearModel;
}

void Car::print() const{
    
    cout<<color<<" "<<model<<" from "<<yearModel<<" year"<<endl; 
}


ostream &operator<<(ostream &cout, const Car &car){
    cout<<car.color<<" "<<car.model<<" from "<<car.yearModel<<" year"; 
    return cout;
}

istream &operator>>(istream &cin, Car &car){
    cout<<"color:";
    cin>>car.color;
    cout<<"model:";
    cin>>car.model;
    cout<<"Model from:";
    cin>>car.yearModel;
    return cin;
}
