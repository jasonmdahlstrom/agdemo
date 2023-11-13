#include "add2.h"

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float grade = 0;
	int sum;

	FILE *fp = fopen("results.txt", "w");
	if( !fp ) {
		printf("ERROR: unable to open results file results.txt\n");
		return -1;
	}

	// Test Case #1
	sum = add2( 1, 2 );
	if( sum == 3 ) {
		printf("PASS: ");
		grade += 0.25;
	} else {
		printf("FAIL: ");
	}
	printf(" add(1,2) returned %d\n", sum);


	// Test Case #2
	sum = add2( -3, 4 );
	if( sum == 1 ) {
		printf("PASS: ");
		grade += 0.25;
	} else {
		printf("FAIL: ");
	}
	printf(" add(-3, 4) returned %d\n", sum);


	// Test Case #3
	sum = add2( 5, -6 );
	if( sum == -1 ) {
		printf("PASS: ");
		grade += 0.25;
	} else {
		printf("FAIL: ");
	}
	printf(" add(5,-6) returned %d\n", sum);


	// Test Case #4
	sum = add2( -7, -8 );
	if( sum == -15 ) {
		printf("PASS: ");
		grade += 0.25;
	} else {
		printf("FAIL: ");
	}
	printf(" add(-7,-8) returned %d\n", sum);

	printf("\n");
	printf("Grade: %0.2f (%3.1f%%)\n\n", grade, grade*100);

	fprintf(fp, "{ \"assignment\" : 1.0, \"grade\" : %0.2f }\n", grade);
	fclose(fp);

	return 0;
}
