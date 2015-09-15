#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int m[100];
    int i = 0;
    int j = 0, t = 0;
    
    printf("Input : \n");
    for(i = 0; i < 5; i ++){
        m[i] = rand() % 100;
        printf("m[%d]=%d\n", i, m[i]);
    }
    
    //-----sort----
    for(i = 0; i < 4; i++ ){
        for(j = i +1; j < 5; j++){
            if (m[i] > m[j]){
                t = m[i];
                m[i] = m[j];
                m[j] = t;
            }
        }
    }
    
    
    
    //-----end sort----
    printf("Output :\n");
    for(i = 0; i < 5; i ++){
        printf("m[%d]=%d\n", i, m[i]);
    }
 
    
    return 0;
}

