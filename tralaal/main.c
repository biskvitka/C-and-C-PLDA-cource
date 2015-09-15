/* 
 * File:   main.c
 * Author: ggrozeva
 *
 * Created on August 28, 2015, 11:33 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    char s = 'A';
    
    int x = 10;
    
    float n = 1.5;
    
    printf("s = ");
    scanf ("%c", &s);
    
    printf("x = ");
    scanf("%d", &x);
    
    printf("n = ");
    scanf("%f", &n);
    
    printf("x=%d\ts=%c\tn=%f\n",x , s, n);
    printf("x=%d\ns=%c\nn=%f", x, s, n);
    return 0;
}

