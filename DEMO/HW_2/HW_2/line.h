//
//  line.h
//  HW_2
//
//  Created by Slava Gubar on 26.02.2021.
//

#ifndef line_h
#define line_h

#include <stdio.h>
#include "point.h"

typedef struct tagLine {
	Point *A;
	Point *B;
} Line;

Line *createLineByPoints(Point *p1, Point *p2);
Line *createLineByCoordinate(int x1, int y1, int x2, int y2);

void deleteLine(Line *l);

double lenghtLine(Line *);

int isLineEqual(Line *leftLine, Line *rightLine); // line1 == line2
void printLine(Line *l);

#endif /* line_h */
