
// Meghan Satterley
// CS303 Assingment 01
// 9/22/22


#pragma once


#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//Read in and open file or error if not found

bool fetch_array(int arr[], int* length)
{
	ifstream fp("Numbers.txt");

	if (!fp.is_open())
	{
		cout << "File Not Opened Properly";
		return false;
	}

	*length = 0;

	while (fp >> arr[*length])
	{
		*length = *length + 1;
	}

	fp.close();

	return true;
}

//Display value list

void print_array(int arr[], int length)
{
	cout << endl << endl << "The current values are: ";

	for (int i = 0; i < length; i++)

		cout << arr[i] << " ";

	cout << endl;
}

//Search for user entered value

int search_value(int arr[], int length, int key)
{
	int i;

	for (i = length - 1; i >= 0; i--)
		if (arr[i] == key)
			return i;

	return i;
}

//modify user selected value

int modify_value(int arr[], int index)
{
	int key;

	cout << "Enter new value: ";
	cin >> key;

	arr[index] = key;

	return key;
}

// add new user entered value

void add_new_value(int arr[], int* length)
{
	int value;

	cout << endl << "Enter new value: ";
	cin >> value;

	arr[*length] = value;

	*length = *length + 1;

	cout << endl << "Value Added";
}

// remove user selected value

void remove_value(int arr[], int* length)
{
	int index;

	cout << endl << "Enter index to be removed: ";
	cin >> index;

	for (int i = index; i < *length - 1; i++)
		arr[i] = arr[i + 1];

	*length = *length - 1;

}
