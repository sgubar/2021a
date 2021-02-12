//
//  main.c
//  lab1
//
//  Created by Slava Gubar on 12.02.2021.
//

#include <stdio.h>
#include "tool.h"

int main(int argc, const char * argv[]) {
	int A = 0, B = 0, C = 0;
	int again = 0;

	fflush(stdin);

	do {
		printf("A: ");
		scanf("%d", &A);

		printf("B: ");
		scanf("%d", &B);

		printf("C: ");
		scanf("%d", &C);

		again = validate(A, B, C);
		print_error(again);
	} while(again < 0);

	printf("Start to calculate ...\n");
	printf("Result: %.2f\n", q(A, B, C));

	return 0;
}
