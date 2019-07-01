/*
 * Author: John Gillen
 * Assignment: Assignment2-weekend
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int a[9];

	for (int i = 0; i <= sizeof(a) / sizeof(a[0]); ++i) {
		printf("Enter integer %d: ", i + 1);
		scanf("%d", &a[i]);
	}

	printf("Integers entered: ");
	for (int i = 0; i <= sizeof(a) / sizeof(a[0]); ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
