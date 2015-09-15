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

    float a = 0;
    float b = 0;
   
    printf("a = ");
    scanf("%f", &a);
    
    printf( "b = ");
    scanf ("%f", &b);
    
    if( b != 0){
        printf("%5.2f / %5.2f = %f\n", a, b, (a/b) );
    }
    else{
        printf("this is incorrect b = %f\n", b);
    }
    return 0    ;
}

