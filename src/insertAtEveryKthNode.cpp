/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
}*pre,*start4;

struct node * insertAtEveryKthNode(struct node *head, int K) {
	struct node *newnode;
	if (K <1 || head == NULL)
		return NULL;
	start4 = head;
	int i = 0;
	while (head != NULL)
	{
		if (i%K == 0 && i != 0)
		{
			newnode = (struct node *)malloc(sizeof(struct node));
			newnode->num = K;
			pre->next = newnode;
			newnode->next = head;
		}
		i++;
		pre = head;
		head = head->next;
	}
	if (i%K == 0)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->num = K;
		pre->next = newnode;
		newnode->next = NULL;
	}
	return start4;
}
