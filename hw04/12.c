#include <stdio.h>

int main() {
	int a[20], b[2][20] = {0}, i, p0 = 0, p1 = 0;
	for( i = 0; i < 20; i++ )
		scanf( "%d", &a[i] );
	for( i = 0; i < 20; i++ ) {
		if( a[i] & 1 ) b[1][p1++] = a[i];
		else b[0][p0++] = a[i];
	}
	for( i = 0; i < 20; i++ ) printf( "%d ", b[0][i] );
	putchar( '\n' );
	for( i = 0; i < 20; i++ ) printf( "%d ", b[1][i] );
	putchar( '\n' );
	return 0;
}