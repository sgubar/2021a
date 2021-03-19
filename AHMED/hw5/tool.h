//
//  tool.h
//  HW5
//
//  Created by AHMED on 3/18/21.
//

#ifndef tool_h
#define tool_h

#include <stdio.h>

long factorial(int num);
long sum(int A, int C);
double q(int A, int B, int C);

//return 0 when everything is ok
//return -1 when something is wrong
int validate(int A, int B, int C);
void print_error(int error_code);

// while, do - while, for(int d = 0; d < C; d++)

#endif /* tool_h */
