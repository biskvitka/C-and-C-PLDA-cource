#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int m[3][3]={
        {1,5,6},{2,3,4},{2,3,4}
    };
    
    int row = 0, col = 0;
    
    for (row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            printf("m[%d][%d] = %d\t", row, col, m[row][col]);
        }
        printf("\n");
    }
    
    return 0;
}

