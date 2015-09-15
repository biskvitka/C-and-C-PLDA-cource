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
    
    
    int a = 0;
    char s = 'A';
   
    printf("a=");
    scanf("%d", &a);
    
    printf("s=");
    do{
        scanf("%c", &s);
    }while( s == '\n');
    
    printf("a=%d s=%c\n", a, s);
    
    return 0;
}

