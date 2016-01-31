/*
OVERVIEW: Merge two sorted linked lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted linked lists.

OUTPUT: Return merged sorted linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
struct node{
	int num;
	struct node *next;
};

struct node * merge2LinkedLists(struct node* list1, struct node* list2){
	node* mergedList, *result;
	if (list1 == NULL && list2 == NULL)
		return NULL;
	if (list1 == NULL)
			return list2;
	if (list2 == NULL)
		return list1;
	if (list1->num < list2->num)
	{
		mergedList = list1;
		result = mergedList;
		list1 = list1->next;
	}
	else
	{
		mergedList = list2;
		result = mergedList;
		list2 = list2->next;
	}
	while (list1 != NULL && list2 != NULL)
	{
		if (list1->num < list2->num)
		{
			mergedList->next = list1;
			mergedList = mergedList->next;
			list1 = list1->next;
		}
		else
		{
			mergedList->next = list2;
			mergedList = mergedList->next;
			list2 = list2->next;
		}
	}
	if (list1 == NULL)
		mergedList->next = list2;
	else
		mergedList->next = list1;
	return result;
}