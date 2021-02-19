//
//  main.c
//  estruct
//
//  Created by Slava Gubar on 19.02.2021.
//

#include <stdio.h>

typedef struct tagTest {
	int a;
	int b;
	char c[300];
} TTest;

void printStruct(TTest *param);
void printStructMemmory(TTest param);

int main(int argc, const char * argv[]) {
	struct tagTest a = { 10, 20, {'A', 'B', 'C'} };
	TTest b = { .b = 10, .c = {'A', 'B', 'C'}, .a = 20 };
	b.c[299] = 'E';
	
	int ax = a.a;
	int bx = a.b;
	char c0 = a.c[0];

	TTest array[10];

	int *pA = &ax;

	TTest *pStruct = &b;
	printf("Our struct: a - %d, b - %d \n", pStruct->a, pStruct->b);
	printf("Our struct: a - %d, b - %d \n", array[1].a, array[1].b);
	printf("Our struct: a - %d, b - %d \n", a.a, a.b);
	printf("Our struct: a - %d, b - %d \n", b.a, b.b);

	printf("a = %d\n", pStruct->a);
	printStruct(pStruct);
	printf("a = %d\n", pStruct->a);

	printf("a = %d\n", a.a);
	printStructMemmory(a);
	printf("a = %d\n", a.a);

	// insert code here...
	printf("Hello, World!\n");
	return 0;
}

void printStruct(TTest *param) { // sizeof(TTest *param)
	printf("Memmory: %ld\n", sizeof(param));
	param->a = 100;

	printf("{ a = %d, b = %d,", param->a, param->b);
	//print array
	printf("c = ");
	for(int i = 0; i < sizeof(param->c); i ++) {
		printf ("%c ", param->c[i]);
	}

	printf("}\n");
}

void printStructMemmory(TTest param){ // sizeof(TTest param)
	printf("Memmory: %ld\n", sizeof(param));
	param.a = 100;
}
