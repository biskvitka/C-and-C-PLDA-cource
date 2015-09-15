#include <iostream>
#include "point.hpp"
using namespace std;


Point &Point::operator+(const Point &ro){
    x += ro.x;
    y += ro.y;
    
}

Point &Point::operator++(){
    x ++;
    y ++;
    return *this;
}

bool Point::operator>(const Point &op){
    return ((x*x + y*y) > (op.x*op.x + op.y*op.y));
}

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
void Point::moveTo(int x, int y){
    this->x += x;
    this->y += y;
    cout<<"x = "<<this->x<<"\ty = "<<this->y<<endl;
}

void Point::redraw(){
    draw();
    
}
