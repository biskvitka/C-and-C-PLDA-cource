#include <stdio.h>
#include <stdlib.h>

enum {ADD = '+', SUBTRACTION = '-', DIVIDE = '/', MULTIPLY = '*', EXIT = '5'};
int main(int argc, char** argv) {
    
    float x = 0;
    float y = 0;
    char operation = 'A';
    
    printf("x = ");
    scanf("%f", &x);
    
    printf("y = ");
    scanf("%f", &y);
    
    printf("Choose operation (ADD-+, SUBTRACION--, MULTIPLY-*, DIVIDE-/ ): ");
    
     do{
        scanf("%c", &operation);
    }while( operation == '\n');
    
    switch(operation){
    case ADD: printf("%f+%f = %f", x, y, (x+y));
                break;
    case SUBTRACTION: printf("%f-%f = %f", x, y, (x-y));
                break;
    case MULTIPLY:printf("%f*%f = %f", x, y, (x*y));
                break;
    case DIVIDE: printf("%f/%f = %f", x, y, (x/y));
                break;
    default: printf("exit");
    }
    
    return 0;
}

