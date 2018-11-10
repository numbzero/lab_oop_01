#include "lab_oop_01.h"

// Write a program that calculates the greatest common divisor of elements in a sequence.
// https://www.geeksforgeeks.org/gcd-two-array-numbers/

void	GreatestCommonDivisor(void)
{
	unsigned int	size;
	int				*arr;

	arr = NULL;
	system("clear");
	cout << "[*] Number of elements > ";
	cin >> size;
	arr = new int[size];
	system("clear");
	if (!arr)
	{
		system("clear");
		cout << "[-] Cannot allocate memory !\n";
		cin.get();
		cin.get();
		exit(1);
	}
	cout << "[*] Give them values.\n\n";
	cin.get();
	for (int i = 0; i < size; i++)
	{
		cout << "  arr el. " << i + 1 << " > ";
		cin >> arr[i];
	}
	cin.get();
	system("clear");
	cout << "[+] Greatest common divisor.\n[!] Result: " << FindGCD(arr, size) << endl;
	cin.get();
	delete []arr;
	return ;
}

int		FindGCD(int	*arr, int size)
{
	int	result;

	if (size == 1)
		return (*arr);
	result = arr[0];
	for (int i = 1; i < size; i++)
		result = GCD(arr[i], result);
	return result;
}

int		GCD(int a, int b)
{
	if (a == 0)
		return b;
	return GCD(b % a, a);
}
