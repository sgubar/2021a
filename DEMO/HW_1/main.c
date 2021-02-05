//
//  main.c
//  d1
//
//  Created by Slava Gubar on 04.02.2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int main(int argc, const char * argv[]) {

	int a = 5;
	int *b = &a;

	a = 5 + 6;

	int c = *b;

	char str1[] = "Hello world, again";
	char *str2 = "Hello world, again";

	char *str3 = str2;

	// insert code here...
	printf("Hello, World!\n");

	int ab = sum(5, 6);
	printf("Result: %d\n", ab);

	printf("A: %d\n", a);
	printf("B: %p\n", b);
	printf("Variable of B: %d\n", *b);
	printf("C: %d\n", c);

	printf("str: %s\n", str3);

	int matrix[3][4];

	int *ptr_matrix = (int *)malloc(sizeof(int) * 3 * 4);

	fill_matrix(ptr_matrix, 3, 4);
	print_matrix(ptr_matrix, 3, 4);

	free(ptr_matrix);

	return 0;
}
