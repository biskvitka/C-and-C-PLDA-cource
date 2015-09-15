#include <stdio.h>
#include <stdlib.h>

int suma( int a, int b){
    int c;
    c = a + b;
    return c;
}
int main(int argc, char** argv) {
    int x = 2;
    int y = 3;
    int res = 0;
    
    res = suma( x, y);
    printf("res=%d\n", res);
}

