//
//  point.c
//  HW_2
//
//  Created by Slava Gubar on 26.02.2021.
//

#include "point.h"
#include <stdlib.h>

Point *createPoint(int x, int y) {
	Point *result = (Point *)malloc(sizeof(Point));
	if (NULL != result) {
		result->x = x;
		result->y = y;
	}

	return result;
}

void deletePoint(Point *p) {
	if (NULL != p) { // define NULL (void *)
		free(p);
	}
}

// return 0 if lp != rp and 1 if lp is the same rp
int isEqualPoints(Point *lp, Point *rp) {
	if (NULL == lp || NULL == rp) {
		return 0;
	}

	return (lp->x == rp->y && lp->y == rp->y) ? 1 : 0;
}

Point *copyPoint(Point *p) {
	if (NULL == p) {
		return NULL;
	}

	return createPoint(p->x, p->y);
}

void printPoint(Point *p) {
	if (NULL == p) {
		printf("Invalid point\n");
	}

	printf("(%d, %d)", p->x, p->y);
}
