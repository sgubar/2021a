//
//  list.c
//  list
//
//  Created by Slava Gubar on 19.03.2021.
//

#include "list.h"
#include <stdlib.h>

// for working with  int element
IntElement *createIntElement(int value) {
	IntElement *result = (IntElement *)malloc(sizeof(IntElement));

	if (NULL != result) {
		result->value = value;
		result->next = NULL;
		result->prev = NULL;
	}

	return result;
}

void deleteIntElement(IntElement *e) {
	if (NULL == e) {
		return ;
	}

	free(e);
}

void printIntElement(IntElement *e) {
	if (NULL == e) {
		return ;
	}

	printf("%d", e->value);
}

// for working with  int list container
IntTList *createIntTList(void) {
	IntTList *result = (IntTList *)malloc(sizeof(IntTList));

	if (NULL != result) {
		result->count = 0;
		result->head = NULL;
		result->tail = NULL;
	}

	return result;
}

void deleteIntTList(IntTList *l) {
	if (NULL == l) {
		return ;
	}

	// iterate through all element of list and delete (free) it
	IntElement *e = l->head;

	while(NULL != e) {
		IntElement *tmp = e;
		e = e->next;
		deleteIntElement(tmp);
	}

	free(l);
}

void printIntTList(IntTList *l) {
	if (NULL == l) {
		return ;
	}

	// [(a1)-(a2)]
	printf("[");

	IntElement *e = l->head;

	while(NULL != e) {
		printIntElement(e);
		if (NULL != e->next) {
			printf(",");
		}
		e = e->next;
	}

	printf("]\n");
}

void addIntValueToTList(IntTList *l, int value) {
	if (NULL == l || (NULL == l->head && l->head != l->tail)) {
		return ;
	}

	//1) create element
	IntElement *new = createIntElement(value);
	if (NULL == new) {
		return ;
	}

	//2) Check empty
	if (NULL == l->head) {
		l->head = new;
		l->tail = l->head;
		l->count ++;
	} else {

		l->tail->next = new;
		new->prev = l->tail;
		l->tail = new;

		l->count ++;
	}
}

void removeIntValueOfHeadInTList(IntTList *l) {
	if (NULL == l || l->head == NULL) {
		return ;
	}

	//1) check if we have just only one element
	if (l->head == l->tail) {
		deleteIntElement(l->head);
		l->head = NULL;
		l->tail = NULL;
		l->count = 0;
	} else {
		IntElement *tmp = l->head;
		l->head = l->head->next;
		l->head->prev = NULL;
		deleteIntElement(tmp);
		l->count --;
	}
}
