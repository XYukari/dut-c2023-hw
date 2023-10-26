#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
	int a[3][3], i, j;
	for( i = 0; i < 3; i++ )
		for( j = 0; j < 3; j++ )
			scanf( "%d", &a[i][j] );
	for( i = 0; i < 3; i++ ) {
		int mx = -1;
		for( j = 0; j < 3; j++ )
			mx = MAX( mx, a[i][j] );
		printf( "%d\n", mx );
	}
	return 0;
}