#include <stdio.h>

int main() {
	int a[10][10] = {0}, i, j;
	for( i = 0; i < 10; i++ ) a[i][i] = 1;
	for( j = 0; j < 10; j++ )
		for( i = j + 1; i < 10; i++ )
			a[i][j] = a[i - 1][j] + j;
	for( i = 0; i < 10; i++ ) {
		for( j = 0; j <= i; j++ )
			printf( "%5d", a[i][j] );
		putchar( '\n' );
	}
	return 0;
}