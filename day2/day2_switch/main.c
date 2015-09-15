/* 
 * File:   main.c
 * Author: ggrozeva
 *
 * Created on September 1, 2015, 9:46 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

enum{NEW = 1, OPEN, SAVE};

int main(int argc, char** argv) {
    int opt = 0;
    printf("Options (%d-new, %d-open, %d-save): ", NEW, OPEN, SAVE);
    scanf("%d", &opt);
    
    switch( opt){
        case NEW: printf("New File\n");
                break;
        case OPEN: printf("Open a File\n");
                break;
        case SAVE: printf("Save File and Exit\n");
                break;
        default: printf("Valid options : %d, %d, %d\n", NEW, OPEN, SAVE);
    }
    
    return 0;
}

