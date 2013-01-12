#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void print_array(int a[], int length)
{
    int i;

    for( i = 0; i < length; i++ ) {
        printf("%d ", a[i]);
    }

    printf("\n");
}

int main(int argc, char *argv[]) 
{
    if(argc < 2) {
        fprintf(stderr, "Usage: %s int int ...\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // Set up number of integers and the array
    int p = argc - 1;
    int seq[p];

    int i;

    for( i = 0; i < p; i++ ) {
        seq[i] = atoi(argv[i + 1]);
    }

    print_array(seq, p);

    insertion_sort(seq, p);

    print_array(seq, p);

    return 0;
}
