#include <stdio.h>

void main() {
	void sort( int *, int *, int * );
	int score1, score2, score3, *p1, *p2, *p3;
	printf( "input the scores of chinese,math,english(0~150):\n" );
	scanf( "%d,%d,%d", &score1, &score2, &score3 );
	p1 = &score1;
	p2 = &score2;
	p3 = &score3;
	sort( p1, p2, p3 );
	printf( "%d,%d,%d", *p1, *p2, *p3 );
}

void swap( int *x, int *y ) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void sort( int *a, int *b, int *c ) {
	if( *a > *b ) swap( a, b );
	if( *b > *c ) swap( b, c );
	if( *a > *c ) swap( a, c );
}