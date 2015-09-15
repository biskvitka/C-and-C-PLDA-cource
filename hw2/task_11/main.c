
#include <stdio.h>
#include <stdlib.h>

void sort( int *array, int size, int dir){
    int i, j;
    int t;
    if(dir == 0){
        for(i = 0; i < size-1; i++ ){
            
            for(j = i +1; j < size; j++){
                
                if (*(array+i) > *(array+j)){
                    t = *(array+i);
                    *(array+i) = *(array+j);
                    *(array+j) = t;
                }
            }
        }    
    }
    else{
        for(i = 0; i < size-1; i++ ){
            for(j = i +1; j < size; j++){
                if (*(array+i) < *(array+j)){
                    t = *(array+i);
                    *(array+i) = *(array+j);
                    *(array+j) = t;
                }
            }
        }    
    }
    for(i=0; i<size; i++){
        printf("%d -> %d address:%p\n", i, *(array+i), (array+i));
    }
    printf("\n");
}


void reverse(int *array, int size){
    int *q = NULL;
    int i;
    q = malloc(sizeof *q * size);
    if(array == NULL){
        printf("Memory allocation error\n");
        exit(0);
    }
    
    for(i=0; i<size; i++){
        *(q+i) = *(array+size-1-i);
    }
    array = q;
    for(i=0; i<size; i++){
        printf("%d -> %d address:%p\n", i, *(array+i), (array+i));
    }
    free(q);
}

int find(const int *array, int size, int elem){
    int i;
    for(i=0; i<size; i++){
        if(*(array+i) == elem){
            return i;
        }
    }
    return -1;
}
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
    printf("\n");
    
    sort(p, n, 0);
    reverse(p, n);
    printf("%d", find(p, n, 4));
    
    
    free(p);
    return 0;
}

