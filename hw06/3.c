#include <stdio.h>
#include <string.h>

void main() {
	void delete_x( char *s );
	char string[81];
	gets( string );

	delete_x( string );
	printf( "%s\n", string );
}

void delete_x( char *s ) {
	char ans[81];
	int n = strlen( s ), i, m = 0;
	for( i = 0; i < n; i++ ) {
		if( s[i] == 'x' ) continue;
		ans[m++] = s[i];
	}
	memcpy( s, ans, sizeof ans );
}