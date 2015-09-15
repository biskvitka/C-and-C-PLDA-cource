#include <iostream>
#include "rectangle.hpp"
using namespace std;
Rectangle::Rectangle():Point(){
    width = 0;
    height = 0;
    cout<<"Constr.Rectangle"<<endl;
}

Rectangle::~Rectangle(){
        cout<<"Destr.Recangle"<<endl;
}

Rectangle::Rectangle(int a, int b, int c, int d):Point(a, b){
    width = c;
    height = d;
    cout<<"Constr,Rectangle"<<endl;
    
}

void Rectangle::draw(){
    Point::draw();
    cout<<"width = "<<width<<"\theight = "<<height<<endl;
}