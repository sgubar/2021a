//
//  math.c
//  d1
//
//  Created by Slava Gubar on 05.02.2021.
//

#include "math.h"

int sum(int A, int B) {
	return A + B;
}

void fill_matrix(int *matrix, int row, int col)
{
	for (int i = 0; i < row; i ++) {
		for (int j = 0; j < col; j ++) {
			*(matrix + i * col + j) = i * j;
		}
	}
}

void print_matrix(int *matrix, int row, int col) {
	for (int i = 0; i < row; i ++) {
		for (int j = 0; j < col; j ++) {
			printf("matrix[%d][%d] = %d\n", i, j, *(matrix + i * col + j));
		}
	}
}
