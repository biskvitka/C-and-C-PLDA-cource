#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int m[100];
    int i;
    
    
    printf("Input : \n");
    for(i = 0; i < 100; i ++){
        m[i] = rand() % 100;
    }
    
    
    printf("Output : ");
    for(i = 0; i < 100; i ++){
        printf("m[%d]=%d\n", i, m[i]);
    }
    
    return 0;
}

