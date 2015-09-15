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
    
    int suma = 0;
    int i = 1;
    for (i = 1; i<=100 ; i++){
        suma += i;
    }    
    printf("suma = %d", suma);
    
    return 0;
}

