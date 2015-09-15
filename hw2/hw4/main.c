
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int arr[] = {6,1,4,5,2};
    
    int min, max, x;
    min = max = arr[0];
    
    int i;
    for (i = 1; i < 5; i++){
        if (min > arr[i]){
            min = arr[i];
        }
        if (max < arr[i]){
            max = arr[i];
        }
    }
    printf("min = %d\t max = %d\n", min, max);
    return 0;
}

