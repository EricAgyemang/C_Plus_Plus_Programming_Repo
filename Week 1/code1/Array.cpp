#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>
using namespace std;

void fillArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		a[i] = rand() % 20;
}

double getAverage(const int a[], const int size)
{
	/*cannot change array 'a' - CONST modifier*/
	// a[0] = 100;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += a[i];
	}
	return sum / size;
}

int main()
{
	int numbers[5];
	int random[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter value for numbers[" << i << "]: ";
		cin >> numbers[i];
		cout << endl;
	}
	cout << sizeof(numbers) << endl;
	cout << "Values enetered" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << numbers[i] << " ";
	}
	srand(time(NULL)); // Randomizes the values
	fillArray(random, 5);
	cout << endl;
	cout << "Random values" << endl;
	for (int i = 0; i < 5; i++)
		cout << random[i] << " ";
	cout << endl;
	cout << "Average of the random array: " << getAverage(random, 5) << endl;

	return 0;
}
