#include "List.hpp"
#include <iostream>
#include <cstdlib>

template <typename T> 
List<T>::List(T d):data(d), next(NULL){
    
}

template <typename T>
List<T>::~List(){
    delete next;
}

template <typename T>
T List<T>::getData(){
    return data;
}


template <typename T>
void List<T>::addNode(List<T> *node){
    next = node;
    
}

template <typename T>
List<T> *List<T>::getNext(){
    return next;
}