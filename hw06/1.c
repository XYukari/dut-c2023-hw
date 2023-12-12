#include <stdio.h>
#include <string.h>

void converse( char *s ) {
	int n = strlen( s ), i;
	for( i = 0; i < n; i++ ) {
		if( 'a' <= s[i] && s[i] <= 'z' )
			s[i] = s[i] - 'a' + 'A';
	}
}

int main() {
	char s[20];
	scanf( "%s", s );
	converse( s );
	printf( "%s\n", s );
	return 0;
}