/* 
 * File:   main.cpp
 * Author: ggrozeva
 *
 * Created on September 10, 2015, 10:10 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

class A{
public:
    A(int x){
        data = new int(x);
        this->x = x;

    }
    
    A(const A &a){
        data = new int( *a.data);
        this->x = a.x;
        cout<<"Copy Constr"<<endl;
    }
    
    ~A(){
        delete data;
        cout<<"A.dist"<<endl;
    }
    
    void show() const{
        cout<<"x = "<<x<<"\t data = "<<*data<<endl;
    }
private:
    int x;
    int *data;
};


void display(const A &ob) {
    ob.show();
}
int main(int argc, char** argv) {

A a(5);
a.show();
display(a);
a.show();
return 0;
}




