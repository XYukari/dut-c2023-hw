#include <stdio.h>
#include <string.h>

void swap( char **a, char **b ) {
	char* tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	char str[5][50];
	char ans[6];
	int selected[5] = {0};
	int i, j;
	for( i = 0; i < 5; i++ ) {
		scanf( "%s", str[i] );
	}
	for( i = 0; i < 5; i++ ) {
		for( j = 0; j < 4; j++ ) {
			if( strlen( str[j] ) > strlen( str[j + 1] ) ) {
				swap( &str[j], &str[j + 1] );
			}
		}
	}
	for( i = 0; i < 5; i++ ) {
//		puts( str[i] );
		if( strlen( str[i] ) < 2 ) ans[i] = ' ';
		else ans[i] = str[i][2];
//		printf( "%d %c\n", i, ans[i] );
	}
	printf( "%s\n", ans );
	return 0;
}