#include <stdio.h>

int main() {
	char* name[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int n;
	scanf( "%d", &n );
	printf( "%s\n", name[n - 1] );
	return 0;
}