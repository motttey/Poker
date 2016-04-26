//sort.c
#include "sort.h"

void sort(int c[]){ //sort value of arrays ascending

	int s, t;
	int tmp; //temporary value

	for( s = 0; s < 4; s++ ){
		for( t = s + 1; t < 5; t++ ){
			if( c[t] < c[ s ]){ //if c[t] is smaller than c[s] , swap each values.
				tmp = c[ t ];
				c[ t ] = c[ s ];
				c[ s ] = tmp;				
			}
		}
	}
}

