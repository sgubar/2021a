//
//  point.h
//  HW_2
//
//  Created by Slava Gubar on 26.02.2021.
//

#ifndef point_h
#define point_h

#include <stdio.h>

typedef struct tagPoint {
	int x;
	int y;
} Point;

Point *createPoint(int x, int y);
void deletePoint(Point *p);

int isEqualPoints(Point *lp, Point *rp);
Point *copyPoint(Point *p);

void printPoint(Point *p);

#endif /* point_h */
