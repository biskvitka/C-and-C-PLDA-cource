
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
#define SUM(A,B) ((A) + (B))
#define SUB(A,B) ((A) - (B))
#define MUL(A,B) ((A) * (B))
#define DIV(A,B) ((A) / (B))
enum{SUM = '+', SUB = '-', MUL = '*', DIV = '/' };
int main(int argc, char** argv) {
    
    float x = 0;
    float y = 0;
    char opr = 'A';
    
    printf("x = ");
    scanf("%f", &x);
    
    printf("y = ");
    scanf("%f", &y);
    
    printf("Choose operation (SUM-+, SUB--, MUL-*, DIV-/ ): ");
    
     do{
        scanf("%c", &opr);
    }while( opr == '\n');
    
    switch(opr){
    case SUM: printf("%f+%f = %f", x, y, SUM(x, y));
                break;
    case SUB: printf("%f-%f = %f", x, y, SUB(x, y));
                break;
    case MUL:printf("%f*%f = %f", x, y, MUL(x, y));
                break;
    case DIV: printf("%f/%f = %f", x, y, DIV(x, y));
                break;
    default: printf("exit");
    }
    return 0;
}

