//
//  list.h
//  list
//
//  Created by Slava Gubar on 19.03.2021.
//

#ifndef list_h
#define list_h

#include <stdio.h>
typedef struct tagIntElement IntElement;

struct tagIntElement {
	int value;
	IntElement *next;
	IntElement *prev;
};

typedef struct tagIntTList {
	IntElement *head;
	IntElement *tail;
	int count;
} IntTList;

// for working with int element
IntElement *createIntElement(int value);
void deleteIntElement(IntElement *e);
void printIntElement(IntElement *e);

// for working with int (two-linked) list container
IntTList *createIntTList(void);
void deleteIntTList(IntTList *l);
void printIntTList(IntTList *l);

void addIntValueToTList(IntTList *l, int value);
void removeIntValueOfHeadInTList(IntTList *l);

#endif /* list_h */
