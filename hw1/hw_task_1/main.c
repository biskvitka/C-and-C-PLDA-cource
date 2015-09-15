#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    float x = 0;
    float y = 0;
    int operation = 0;
    
    printf("x = ");
    scanf("%f", &x);
    
    printf("y = ");
    scanf("%f", &y);
    
    printf("Choose operation (1-+, 2--, 3-*, 4-/, 5-exit): ");
    scanf("%d", &operation);
    if (operation == 1){
        printf("%f+%f = %f", x, y, (x+y));
    }
    else if (operation == 2){
        printf("%f-%f = %f", x, y, (x-y));
    }
    else if (operation == 3){
        printf("%f*%f = %f", x, y, (x*y));
    }
    else if (operation == 4){
        printf("%f/%f = %f", x, y, (x/y));
    }
    else if (operation == 5){
        printf("exit");
    }
    else{
        printf("Not existing operation");
    }
    return 0;
}

