#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
#include "Employee.h"
using namespace std;


template <typename T>
int partition(T arr[], int start, int end)
{
	// The pivot element is taken to be the element
	// at the start of the subrange to be partitioned.

	T pivotValue = arr[start];
	int pivotPosition = start;

	// Re-arrange the rest of the array elements to
	// partition the subrange from start to end.
	for (int position = start + 1; position <= end; position++)
	{
		bool check = (*arr[position] < *pivotValue);
		if (check)
		{
			// arr[position] is the current item.
			// Swap the current item with the item to the right
			// of the pivot element.
			swap(arr[pivotPosition + 1], arr[position]);

			// Swap the current item with the pivot element.
			swap(arr[pivotPosition], arr[pivotPosition + 1]);

			// Adjust the pivot position so it stays with the pivot element.
			pivotPosition++;
		}
	}
	return pivotPosition;
}


template <typename T>
T* quickSort(T* arr, int start, int end)
{
	if (start < end)
	{
		int pivot = partition(arr, start, end);	// partition array, and get pivot point
		quickSort(arr, start, (pivot - 1));		// sort the left  portion
		quickSort(arr, (pivot + 1), end);		// sort the right portion
	}
	return arr;
}


int main()
{	


	cout << endl << endl; // print empty lines
	const int SIZE2 = 5;
	Employee* employees[SIZE2];


	employees[0] = new Employee("laura", 18, "admin");
	employees[1] = new Employee("mike", 12, "DB");
	employees[2] = new Employee("joan", 15, "user");
	employees[3] = new Employee("bob", 56, "public");
	employees[4] = new Employee("alex", 8, "Nothing");

	for (int i = 0; i < SIZE2; i++) {
		employees[i]->printName();// printName();
	}

	if (employees[1] > employees[2]) {
		bool b = (employees[1] > employees[2]);
		cout << b << endl;
		cout << "greater" << endl;
	}
	else {
		cout << "less" << endl;
		bool b = (employees[1] > employees[2]);
		cout << b << endl;
	}

	cout << "\n*** Sorting Employee array***\n" << endl; 

	quickSort(employees, 0, SIZE2-1);

	for (int i = 0; i < SIZE2; i++) {
		employees[i]->printName();
	}

	system("pause");
	return 0;
}

