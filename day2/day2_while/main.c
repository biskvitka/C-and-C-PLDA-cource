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

enum{NEW = 1, OPEN, SAVE};

int main(int argc, char** argv) {
    
    
    int suma = 0;
    int i = 1;
    while(i <= 100){
        i++;
        if(i%2 != 0) continue;
        suma += i;
    }
    printf("suma = %d\n", suma);
    return 0;
}

