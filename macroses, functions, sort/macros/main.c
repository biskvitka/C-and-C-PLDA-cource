#include <stdio.h>
#include <stdlib.h>
//gcc -E main.c
#define SUMA(A,B) ( (A) + (B))
#define SIZE (10)
int main(int argc, char** argv) {
    
    int x = 2, y = 3;
    float m = 3.4, n = 3.2;
    int i = 0;
    
    printf("%d + %d = %d\n", x, y, SUMA(x, y));
    printf("%f + %f = %f\n", m, n, SUMA(m, n));
    for(i = 0; i<SIZE; i+=2){
        printf("%d\t", i);
    }
    printf("\n");
  
#undef SIZE
#undef SUMA
    
    for(i = 0; i<SIZE; i+=2){
        printf("%d\t", i);
    }
    printf("\n");
    
    return 0;
}

