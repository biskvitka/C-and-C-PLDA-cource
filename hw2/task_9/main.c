
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int *p = NULL;
    int n = 5;
    p = malloc(sizeof *p * n);
    if(p == NULL){
        printf("Memory allocation error\n");
        exit(0);
    }
    int i;
    for(i=0; i<n; i++){
        *(p+i) = rand() %100;
        printf("%d -> %d address:%p\n", i, *(p+i), (p+i));
    }
    
    int *min;
    int *max ;
    max = p;
    min = p;
    for(i=0; i<n; i++){
        if(*min > *(p+i)){
            min = (p+i);
        }
        if(*max < *(p+i)){
            max = (p+i);
            }
    }
    printf("min = %d \nmax = %d\n", *(min), *(max));
    int *q = NULL;
    q = malloc(sizeof *q * n);
    if(p == NULL){
        printf("Memory allocation error\n");
        exit(0);
    }
    
    for(i=0; i<n; i++){
        *(q+i) = *(p+n-1-i);
    }
    p = q;
    for(i=0; i<n; i++){
        printf("%d -> %d address:%p\n", i, *(p+i), (p+i));
    }
    
    free(p);
    free(max);
    free(min);
    free(q);
    return 0;
}

