#include "lab_oop_01.h"

int	main(void)
{
	char	key;

	do
	{
		system("clear");
		cout << "\t\t[MENU]\n\n";
		cout << "a) Get the biggest common divisor in a sequence.\n";
		cout << "b) Get number of order for the minimum number from doubly linked list.\n\n";
		cout << "[a/b/e - exit] > ";
		cin >> key;
		switch (key)
		{
			case 'a':	GreatestCommonDivisor(); break;
			case 'b':	NumberOfOrderForTheMinimumNumberFromDoublyLinkedList(); break;
		}
	}
	while (key != 'e');
	system("clear");
	return (0);
}
