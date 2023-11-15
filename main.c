#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "the-list.h"

int main(int argc, char *argv[])
{
    FILE *fileIn = NULL;

    if(argc != 2){
        printf("ERROR: Missing CSV file on command argument\n");
        return 1;
    }

    printf("Opening %s...\n",argv[1]);
    fileIn =fopen(argv[1],"r");

    if(fileIn == NULL){
        printf("ERROR: Could not open file\n");
        return 1;
    }
    
}