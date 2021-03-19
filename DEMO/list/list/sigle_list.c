//
//  sigle_list.c
//  list
//
//  Created by Slava Gubar on 19.03.2021.
//

#include "sigle_list.h"
#include <stdlib.h>

// for working with single int element
SingleIntElement *createSingleIntElement(int value) {
	SingleIntElement *result = (SingleIntElement *)malloc(sizeof(SingleIntElement));

	if (NULL != result) {
		result->value = value;
		result->next = NULL;
	}

	return result;
}

void deleteSingleIntElement(SingleIntElement *e) {
	if (NULL == e) {
		return ;
	}

	free(e);
}

void printSingleIntElement(SingleIntElement *e) {
	if (NULL == e) {
		return ;
	}

	printf("(%d)", e->value);
}

// for working with single int list container
IntList *createIntList(void) {
	IntList *result = (IntList *)malloc(sizeof(IntList));

	if (NULL != result) {
		result->count = 0;
		result->head = NULL;
	}

	return result;
}

void deleteIntList(IntList *l) {
	if (NULL == l) {
		return ;
	}

	// iterate through all element of list and delete (free) it
	SingleIntElement *e = l->head;

	while(NULL != e) {
		SingleIntElement *tmp = e;
		e = e->next;
		deleteSingleIntElement(tmp);
	}

	free(l);
}

void printIntList(IntList *l) {
	if (NULL == l) {
		return ;
	}

	// [(a1)-(a2)]
	printf("[");

	SingleIntElement *e = l->head;

	while(NULL != e) {
		printSingleIntElement(e);
		if (NULL != e->next) {
			printf("-");
		}
		e = e->next;
	}

	printf("]\n");
}

void addIntValue(IntList *l, int value) {
	if (NULL == l) {
		return ;
	}

	//1) create element
	SingleIntElement *new = createSingleIntElement(value);
	if (NULL == new) {
		return ;
	}

	//2) Check empty
	if (NULL == l->head) {
		l->head = new;
		l->count ++;
	} else {
		SingleIntElement *e = l->head;

		while(NULL != e->next) {
			e = e->next;
		}

		e->next = new;
		l->count ++;
	}
}

void removeIntValueOfHead(IntList *l) {
	if (NULL == l || l->head == NULL) {
		return ;
	}

	// Check if we have just only element in our list
	if (l->head->next == NULL) {
		deleteSingleIntElement(l->head);
		l->count --;
	} else {
		SingleIntElement *tmp = l->head;
		l->head = tmp->next;
		deleteSingleIntElement(tmp);
		l->count --;
	}
}

