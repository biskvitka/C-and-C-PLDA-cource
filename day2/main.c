/* 
 * File:   main.c
 * Author: ggrozeva
 *
 * Created on September 1, 2015, 9:46 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int a = 2;
    int b = 0;
    
    b = a++;
    /*
     *1. b = a
     *2. a++
     */
    printf("a=%d b=%d\n", a, b);
    printf("b=%d\n", b);
    
    
    a = 2;
    b = ++a;
   /*
    1. a++
    * 2. b = a
    */
    
    printf("a=%d b=%d\n", a, b);
    return 0    ;
}

