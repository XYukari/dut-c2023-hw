#include <stdio.h>
#include <malloc.h>

int main() {
	int n, m, i, j = 0;
	int *a, *b;
	scanf( "%d%d", &n, &m );
	a = ( int* )malloc( sizeof( int ) * n );
	b = ( int* )malloc( sizeof( int ) * n );
	for( i = 0; i < n; i++ )
		scanf( "%d", &a[i] );
	for( i = n - m; i < n; i++ )
		b[j++] = a[i];
	for( i = 0; i < n - m; i++ )
		b[j++] = a[i];
	for( i = 0; i < n; i++ )
		printf( "%d ", b[i] );
	return 0;
}