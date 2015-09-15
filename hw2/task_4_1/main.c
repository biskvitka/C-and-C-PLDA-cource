
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int arr[5] = {3,2,1,5,6};
    int arr2[5];
    int i = 0, j = 0;
    for(i=4; i>=0; i--, j++){
        arr2[j] = arr[i];
    }
    for (i=0; i<5; i++){
        arr[i] = arr2[i]; 
        printf("%d\n", arr[i]);
    }
    return 0;
}

