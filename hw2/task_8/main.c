
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int sum(int n){
    if (n==0){
        return n;
    }
    else 
        return n+sum(n-1);
}

int main(int argc, char** argv) {
    printf("%d", sum(100));

    return 0;
}

