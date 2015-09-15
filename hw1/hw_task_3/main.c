#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int n = 0;
    int fl = 1;
    printf("n = ");
    scanf("%d", &n);
    
    if((n>0) && (n<=10)){
        while (n >= 1){
            fl *= n;
            n--;
        }
        printf("n! = %d\n", fl);
    }
    
    return 0;
}

