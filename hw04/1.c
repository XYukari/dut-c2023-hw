#include <stdio.h>

int main() {
	int a[10], i, ans = 0;
	double average = 0;
	for( i = 0; i < 10; i++ ) {
		scanf( "%d", &a[i] );
		average += a[i];
	}
	average /= 10;
	for( i = 0; i < 10; i++ )
		ans += ( a[i] >= average );
	printf( "%d\n", ans );
	return 0;
}