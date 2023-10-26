#include <stdio.h>
#include <string.h>

int main() {
	char s[200];
	int letter = 0, digit = 0, space = 0, other = 0, n, i;
	gets( s );
	n = strlen( s );
	for( i = 0; i < n; i++ ) {
		if( ( 'a' <= s[i] && s[i] <= 'z' ) || ( 'A' <= s[i] && s[i] <= 'Z' ) ) letter++;
		else if( '0' <= s[i] && s[i] <= '9' ) digit++;
		else if( s[i] == ' ' ) space++;
		else other++;
	}
	printf( "%d letters, %d digits, %d spaces and %d other charactors.\n", letter, digit, space, other );
	return 0;
}