/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	
	struct node *pre, *start3 = head;
	if (head == NULL)
		return -1;
	int c = 0;
	while (head != NULL)
	{
		head = head->next;
		c++;
	}
	head = start3;
	int d;
	int k;
	d = c / 2;
	while (d> 0)
	{
		pre = head;
		head = head->next;
		d--;
	}
	k = head->num;
	if (c % 2 == 0 && c != 0)
	{
		k = k + pre->num;
		k = k / 2;
	}
	return k;
}
