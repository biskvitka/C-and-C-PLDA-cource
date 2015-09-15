/* 
 * File:   main.cpp
 * Author: ggrozeva
 *
 * Created on September 10, 2015, 10:10 AM
 */

#include <cstdlib>
#include<iostream>
#include "point.hpp"
#include "shape.hpp"
#include "List.hpp"
#include "List.cpp"
using namespace std;


int main(int argc, char** argv) {
    List<int> *list = NULL, *tmp = NULL;
    for (int i  = 0; i < 10; i++){
        tmp = new List<int>(rand() %100);
        tmp->addNode(list);
        list = tmp;
    }
    
    tmp = list;
    
    while(tmp != NULL){
        cout<<tmp->getData()<<"|";
        tmp = tmp->getNext();
        
    }
  
    
    return 0;
}

