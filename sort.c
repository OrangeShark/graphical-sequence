#include <stdio.h>

void insertion_sort(int a[], int length)
{
    int i;

    for( i = 0; i < length; i++ ) {
        int tmp = a[i];
        int j = i;

        for( ; j > 0 && tmp > a[j - 1]; j-- ) {
            a[j] = a[j - 1];
        }

        a[j]= tmp;
    }
}
