#include <stdio.h>

int main() {
	int f[20] = {0, 1}, i;
	for( i = 2; i < 20; i++ )
		f[i] = f[i - 1] + f[i - 2];
	for( i = 0; i < 20; i++ )
		printf( "%d ", f[i] );
	return 0;
}