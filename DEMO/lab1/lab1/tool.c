//
//  tool.c
//  lab1
//
//  Created by Slava Gubar on 12.02.2021.
//

#include "tool.h"
#include <math.h>

long factorial(int num) {
	long result = 1;

	// 3! = 1*2*3
	for (int i = 1; i <= num; i++) {
		result *= i;
	}

	return result;
}

long sum(int A, int C) {
	int result = 0;

	for (int D = 0; D < C; D++) {
		result += factorial(A + D);
	}

	return result;
}

double q(int A, int B, int C) {
	return A * (sqrt(B+C)/B) + sum(A, C);
}

//return 0 when everything is ok
//return -1 when something is wrong
int validate(int A, int B, int C) {
	if (A == 0) {
		return -2;
	}

	if (B == 0) {
		return -1;
	}

	if ((B + C) < 0) {
		return -3;
	}

	return 0;
}

void print_error(int error_code) {
	printf("check input variables: ");
	switch (error_code) {
		case -1:
			printf("wrong B\n");
			break;
		case -2:
			printf("wrong A\n");
			break;
		case -3:
			printf("wrong B or C, because (B+C) < 0\n");
			break;
		case 0:
			printf("no errors\n");
			break;
		default:
			printf("unknown error\n");
	}
}
