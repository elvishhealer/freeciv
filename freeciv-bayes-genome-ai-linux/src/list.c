#include "list.h"

#include <stdlib.h>

void make_list(ListPtr lp)
{
	lp = (ListPtr)malloc(sizeof(List));
	lp->data = NULL;
	lp->next = NULL;
}

void free_list(ListPtr lp)
{
	free(lp);
}

void add_to_list(Data d, ListPtr lp)
{
	ListPtr lp2 = lp->next;
	*(lp->data) = d;
	lp->next = lp2;
}

void add_to_list_back(Data d, ListPtr lp)
{
	while (lp->next != NULL)
		lp = lp->next;
	
	*(lp->data) = d;
	lp->next = NULL;
	
}

DataPtr search_list(Data d, ListPtr lp)
{
	while (lp->next != NULL && *(lp->data) != d)
		*lp++;
	if (lp->next == NULL)
		return NULL;
	else
		return lp->data;
}
 

	
