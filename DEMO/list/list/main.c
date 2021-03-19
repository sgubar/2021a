//
//  main.c
//  list
//
//  Created by Slava Gubar on 19.03.2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sigle_list.h"
#include "list.h"

int main(int argc, const char * argv[]) {
	printf ("Single linked list\n");
	IntList *sl = createIntList();
	printIntList(sl);

	addIntValue(sl, 3);
	printIntList(sl);

	addIntValue(sl, 56);
	printIntList(sl);

	addIntValue(sl, 34);
	printIntList(sl);

	removeIntValueOfHead(sl);
	printIntList(sl);

	deleteIntList(sl);

	printf ("Two linked list\n");

	IntTList *l = createIntTList();
	printIntTList(l);

	addIntValueToTList(l, 3);
	printIntTList(l);

	addIntValueToTList(l, 56);
	printIntTList(l);

	addIntValueToTList(l, 34);
	printIntTList(l);

	removeIntValueOfHeadInTList(l);
	printIntTList(l);

	deleteIntTList(l);
	return 0;
}
