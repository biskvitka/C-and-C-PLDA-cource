#include <iostream>
#include "point.hpp"
using namespace std;

Point::~Point(){
    cout<<"Destr.Point"<<endl;
}

Point::Point(int x , int y ){
    this->x = x;
    this->y = y;
    setVisible(true);
    cout<<"Constr.point"<<endl;
}

void Point::setX(int x){
    this->x = x;   
}

void Point::setY(int y){
    this->y = y;
}

void Point::setVisible(bool a){
    visible = a;
}


int Point::getX(){
    return x;
}

int Point::getY(){
    return y;
}

bool Point::isVisible(){
    return visible;
}

void Point::draw(){
    if( isVisible()){
        cout << "Draw point (" << getX() << ","<<getY()<<")"<<endl;
    }
    else{
        cout<<"Hidden point ("<<getX()<<","<<getY()<<")"<<endl;
    }
}
