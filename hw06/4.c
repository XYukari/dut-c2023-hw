#include <stdio.h>
#include <string.h>

int subString( char *s, char *t ) {
	int n = strlen( s );
	int m = strlen( t );
	int i, j, ans = 0, match;
	if( m > n ) return 0;
	for( i = 0; i < n - m + 1; i++ ) {
		match = 1;
		for( j = 0; j < m; j++ ) {
			if( s[i + j] != t[j] ) {
				match = 0;
				break;
			}
		}
		if( match ) ans++;
	}
	return ans;
}

int main() {
	char s[50];
	char t[20];
	scanf( "%s%s", s, t );
	int num = subString( s, t );
	printf( "%d\n", num );
	return 0;
}