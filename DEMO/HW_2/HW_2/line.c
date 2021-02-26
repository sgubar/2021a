//
//  line.c
//  HW_2
//
//  Created by Slava Gubar on 26.02.2021.
//

#include "line.h"
#include <stdlib.h>
#include <math.h>

Line *internalCreateLineByPoints(Point *p1, Point *p2);

Line *createLineByPoints(Point *p1, Point *p2) {
	if (NULL == p1 || NULL == p2) {
		return NULL;
	}

	return internalCreateLineByPoints(copyPoint(p1), copyPoint(p2));
}

Line *createLineByCoordinate(int x1, int y1, int x2, int y2) {
	return internalCreateLineByPoints(createPoint(x1, y1), createPoint(x2, y2));
}

Line *internalCreateLineByPoints(Point *p1, Point *p2) {
	Line *result = (Line *)malloc(sizeof(Line));
	if (NULL != result) {
		result->A = p1;
		result->B = p2;
	}

	return result;
}

void deleteLine(Line *l) {
	if (NULL == l) {
		return ;
	}

	deletePoint(l->A);
	deletePoint(l->B);

	free(l);
}

int isLineEqual(Line *leftLine, Line *rightLine) { // line1 == line2
	if (NULL == leftLine || NULL == rightLine) {
		return 0;
	}

	return (isEqualPoints(leftLine->A, rightLine->A) && isEqualPoints(leftLine->B, rightLine->B)) ? 1 : 0;
}

void printLine(Line *l) {
	if (NULL == l) {
		printf("Invalid input Line\n");
	}

	// (x1, y1)-(x2, y2)
	printPoint(l->A);
	printf("-");
	printPoint(l->B);
}

double lenghtLine(Line *l) {
	if (NULL == l) {
		return -1; // 0
	}

	int dx = (l->B->x - l->A->x);
	int dy = (l->B->y - l->A->y);

	return sqrt(dx*dx + dy*dy);
}
