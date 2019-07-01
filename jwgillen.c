/*
 * Author: John Gillen
 * Assignment: Assignment2-weekend
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	
	// initialize integer array with 10 indexes
	int a[9];

	// iterate over array, storing user input in each index
	for (int i = 0; i <= sizeof(a) / sizeof(a[0]); ++i) {
		printf("Enter integer %d: ", i + 1);
		scanf("%d", &a[i]);
	}

	// iterate over array, printing each index on a single line
	printf("Integers entered: ");
	for (int i = 0; i <= sizeof(a) / sizeof(a[0]); ++i) {
		printf("%d ", a[i]);
	}

	printf("\n");

	return 0;
}
