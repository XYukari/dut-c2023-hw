#include <stdio.h>
#include <string.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
	int a[5][5], i, j, maxr[5], minc[5];
	memset( maxr, 0, sizeof maxr );
	memset( minc, 0x3f, sizeof minc );
	for( i = 0; i < 5; i++ ) {
		for( j = 0; j < 5; j++ ) {
			scanf( "%d", &a[i][j] );
			maxr[i] = MAX( maxr[i], a[i][j] );
			minc[j] = MIN( minc[j], a[i][j] );
		}
	}
	for( i = 0; i < 5; i++ )
		for( j = 0; j < 5; j++ )
			if( a[i][j] == maxr[i] && a[i][j] == minc[j] )
				printf( "a[%d][%d] = %d\n", i, j, a[i][j] );
	return 0;
}