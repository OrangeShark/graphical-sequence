#include <stdio.h>
#include "sort.h"


int is_graphical( int s[], int p)
{
    int i;
    int zflag;
    int n;

    for( i = 0; i < p; i++ ) {
        if( s[i] > p - 1 ) {
            return 0;
        }
    }

    while( p > 1 ) {
        

        zflag = 0;

        for( i = 0; i < p; i++ ) {
            zflag += s[i];
            
            if( s[i] < 0 ) {
                return 0;
            }
        }

        if( zflag == 0 ) { 
            return 1;
        } 

        n = s[0];
        s = &s[1];
        p--;
        
        for( i = 0; i < n; i++ ) {
            s[i]--;
        }

        insertion_sort(s, p);

    }

    return 0;


}
