#include <stdio.h>
#include <string.h>
#include <malloc.h>

int swap( int *a, int *b ) {
	if( ( *a ) != ( *b ) )
		( *a ) ^= ( *b ) ^= ( *a ) ^= ( *b );
}

int sort( int *a, int l, int r ) {
	int i = l, j = r;
	int mid = a[( l + r ) / 2];
	do {
		while( a[i] < mid ) i++;
		while( a[j] > mid ) j--;
		if( i <= j ) {
			swap( &a[i], &a[j] );
			i++, j--;
		}
	} while( i <= j );
	if( l < j ) sort( a, l, j );
	if( r > i ) sort( a, i, r );
}

int unique( int *a, int n ) {
	int *b = ( int* )malloc( sizeof( int ) * n );
	int m = 0, i;
	for( i = 0; i < n; i++ )
		if( i == 0 || a[i] != a[i - 1] ) b[m++] = a[i];
	a = b;
	return m;
}

int main() {
	int n, m, *a, i;
	scanf( "%d", &n );
	a = ( int* )malloc( sizeof( int ) * n );
	for( i = 0; i < n; i++ )
		scanf( "%d", &a[i] );
	sort( a, 0, n - 1 );
	m = unique( a, n );
	for( i = 0; i < m; i++ )
		printf( "%d ", a[i] );
	return 0;
}