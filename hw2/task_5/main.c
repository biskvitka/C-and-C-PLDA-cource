
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n = 5;
    int m[n][n];
    int i,j;
    int suma = 0;
    for(i=0; i<n; i++){
        
        for(j=0; j<n; j++){
            m[i][j] = rand()%100;
            printf("%d\t", m[i][j]);
            suma += m[i][j];
    
            if(i != j){
                suma -= m[i][j];
            }
        }  
        printf("\n");
    }
    printf("suma = %d\n", suma);
    
    for(i=0; i<n; i++){
        for(j=i; j<n; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

