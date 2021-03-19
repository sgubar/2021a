//
//  sigle_list.h
//  list
//
//  Created by Slava Gubar on 19.03.2021.
//

#ifndef sigle_list_h
#define sigle_list_h

#include <stdio.h>

typedef struct tagSingleIntElement SingleIntElement;

struct tagSingleIntElement {
	int value;
	SingleIntElement *next;
};

typedef struct tagIntList {
	SingleIntElement *head;
	int count;
} IntList;

// for working with single int element
SingleIntElement *createSingleIntElement(int value);
void deleteSingleIntElement(SingleIntElement *e);
void printSingleIntElement(SingleIntElement *e);

// for working with single int list container
IntList *createIntList(void);
void deleteIntList(IntList *l);
void printIntList(IntList *l);

void addIntValue(IntList *l, int value);
void removeIntValueOfHead(IntList *l);



#endif /* sigle_list_h */
