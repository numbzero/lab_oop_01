#include "lab_oop_01.h"

// Write a program that determines the minimum number order number in a double-linked list.
// https://www.geeksforgeeks.org/doubly-linked-list/
// https://en.wikipedia.org/wiki/Doubly_linked_list

void	NumberOfOrderForTheMinimumNumberFromDoublyLinkedList(void)
{
	Node 	*head;
	char	key;

	head = NULL;
	system("clear");
	do
	{
		system("clear");
		cout << "Insert node ? ([Y]es/[N]o) > ";
		cin >> key;
		cin.get();
		if (key == 'Y' || key == 'y')
			InsertNode(&head);
	}
	while (key != 'N' && key != 'n');
	if (!head)
	{
		system("clear");
		cout << "[-] List is empty\n";
		cin.get();
		return ;
	}
	ShowList(head);
	TraverseList(head);
	return ;
}

Node 	*NewNode(int data)
{
	Node 	*new_node;

	new_node = new Node;
	if (!new_node)
	{
		system("clear");
		cout << "[-] Cannot allocate memory !\n";
		cin.get();
		exit(1);
	}
	new_node->data = data;
	new_node->next = NULL;
	new_node->prev = NULL;
	return new_node;
}

void	InsertNode(Node **head_ref)
{
	Node 	*last;
	Node 	*new_node;
	int 	data;

	system("clear");
	cout << "Number > ";
	cin >> data;
	cin.get();
	new_node = NewNode(data);
	if (!(*head_ref))
		(*head_ref) = new_node;
	else
	{
		last = *head_ref;
		while (last->next)
			last = last->next;
		last->next = new_node;
		new_node->prev = last;
	}
	system("clear");
	cout << "[+] Node inserted!\n";
	cin.get();
	return ;
}

void	FreeList(Node **head_ref)
{
	Node 	*tmp;
	Node 	*next;

	tmp = *head_ref;
	while (tmp)
	{
		next = tmp->next;
		delete tmp;
		tmp = next;
	}
	*head_ref = NULL;
	system("clear");
	cout << "[+] List is free!\n";
	cin.get();
	return ;
}

void	TraverseList(Node *head)
{
	int i;
	int	min;
	int	order;

	order = 1;
	min = head->data;
	head = head->next;
	i = 2;
	while (head)
	{
		if (head->data < min)
		{	
			min = head->data;
			order = i;
		}
		head = head->next;
		i++;
	}
	system("clear");
	cout << "[+] Number of order for the minimum nbr. of the d.l.l. is " << order << " and min value is " << min << endl;
	cin.get();
	return ;
}

void	ShowList(Node *head)
{
	int i;

	system("clear");
	cout << "[+] Show list.\n\n";
	i = 1;
	while (head)
	{
		cout << "Node " << i << " data - " << head->data << endl;
		head = head->next;
		i++;
	}
	cin.get();
	return ;
}
