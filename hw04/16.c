#include <stdio.h>

int swap( int *a, int *b ) {
	if( ( *a ) != ( *b ) )
		( *a ) ^= ( *b ) ^= ( *a ) ^= ( *b );
}

int asc( int x, int y, int z ) {
	if( x > y ) swap( &x, &y );
	if( x > z ) swap( &x, &z );
	if( y > z ) swap( &y, &z );
		printf( "%d %d %d\n", x, y, z );
}

int dsc( int x, int y, int z ) {
	if( x < y ) swap( &x, &y );
	if( x < z ) swap( &x, &z );
	if( y < z ) swap( &y, &z );
		printf( "%d %d %d\n", x, y, z );
}

int main() {
	int a[3][3], i, j;
	for( i = 0; i < 3; i++ )
		for( j = 0; j < 3; j++ )
			scanf( "%d", &a[i][j] );
	for( i = 0; i < 3; i++ )
		asc( a[i][0], a[i][1], a[i][2] );
	for( i = 0; i < 3; i++ )
		dsc( a[0][i], a[1][i], a[2][i] );
	return 0;
}