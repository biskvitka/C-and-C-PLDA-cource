
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct{int x; int y;} point;

int distance(point *a, point *b){
    return sqrt((a->x - b->x)*(a->x - b->x) + (a->y - b->y)*(a->y - b->y));
}

int main(int argc, char** argv) {
    int num = 0;
    printf("How many points do you want? ");
    scanf("%d", &num);
    point *arr = NULL;
    arr = malloc(sizeof *arr * num);
    if(arr == NULL){
        printf("Memory allocation error\n");
        exit(0);
    }
    int i;
    for(i=0; i<num; i++){
        (arr+i)->x = rand() %100;
        (arr+i)->y = rand() %100;
        printf("x = %d   y = %d\n", (arr+i)->x, (arr+i)->y);
    }
    int dis = 0;
    for(i=1; i<num; i++){
        dis += distance((arr + i - 1), (arr + i));
    }
    printf("distance = %d", dis);
    
    free(arr);
    return 0;
}

