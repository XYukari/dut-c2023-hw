#include <stdio.h>

int main() {
	int a[5] = {1, 3, 5, 6, 11};
	int b[5] = {4, 6, 7, 8, 12};
	int c[10], i = 0, j = 0, p = 0;
	while( i < 5 && j < 5 ) {
		if( a[i] < b[j] ) c[p++] = a[i++];
		else c[p++] = b[j++];
	}
	while( i < 5 ) c[p++] = a[i++];
	while( j < 5 ) c[p++] = b[j++];
	for( i = 0; i < 10; i++ )
		printf( "%d ", c[i] );
	return 0;
}