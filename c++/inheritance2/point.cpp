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


int Point::getX() const{
    return x;
}

int Point::getY() const{
    return y;
}

bool Point::isVisible() const{
    return visible;
}

void Point::draw() const{
    if( isVisible()){
        cout << "Draw point (" << getX() << ","<<getY()<<")"<<endl;
    }
    else{
        cout<<"Hidden point ("<<getX()<<","<<getY()<<")"<<endl;
    }
}
void Point::moveTo(int x, int y){
    this->x += x;
    this->y += y;
    cout<<"x = "<<this->x<<"\ty = "<<this->y<<endl;
}

void Point::redraw(){
    draw();
    
}
