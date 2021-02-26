//
//  main.c
//  HW_2
//
//  Created by Slava Gubar on 26.02.2021.
//

#include <stdio.h>
#include "line.h"

int main(int argc, const char * argv[]) {
	Point *A = createPoint(5, 6);
	Point *B = createPoint(51, 63);
	Line *line = createLineByPoints(A, B);
	printLine(line);
	printf("\nlenght: %f\n", lenghtLine(line));

	Point sA = {4,5};
	Point sB = {.y = 76, .x = 6};

	Line *line2 = createLineByPoints(&sA, &sB);
	printLine(line2);
	printf("\nlenght: %f\n", lenghtLine(line2));

	Line *line3 = createLineByCoordinate(1, 2, 3, 4);
	printLine(line3);
	printf("\nlenght: %f\n", lenghtLine(line3));

	// insert code here...
	printf("Hello, World!\n");

	deletePoint(A);
	deletePoint(B);
	deleteLine(line);
	deleteLine(line2);
	deleteLine(line3);

	return 0;
}
