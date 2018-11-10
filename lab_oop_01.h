#ifndef	LAB_POO_1_H
# define LAB_POO_1_H

# include <iostream>
# include <cstdlib>
# include <unistd.h>

using 	std::cout;
using 	std::cin;
using	std::endl;

struct 		Node
{
	int		data;
	Node	*next;
	Node	*prev;
};

void		GreatestCommonDivisor(void);
int			FindGCD(int	*arr, int size);
int			GCD(int a, int b);

void		NumberOfOrderForTheMinimumNumberFromDoublyLinkedList(void);
Node 		*NewNode(int data);
void		InsertNode(Node **head_ref);
void		FreeList(Node **head_ref);
void		TraverseList(Node *head);
void		ShowList(Node *head);


#endif