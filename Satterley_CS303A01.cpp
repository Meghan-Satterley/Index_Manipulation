
// Meghan Satterley
// CS303 Assingment 01
// 9/22/22
 
#include<iostream>
#include<fstream>
#include<string>
#include "Satterley_CS303A01.h"

using namespace std;
//display modified values back to user

int main()
{
	int arr[100], length, index, key;

	if (!fetch_array(arr, &length))
		return 0;

	print_array(arr, length);

	// prompt user to enter value to find

	cout << endl << "Enter the value to search for: ";
	cin >> key;

	index = search_value(arr, length, key);

	///if (index == -1)
		///cout << endl << "Value not found";
		
	///else

		cout << endl << key << " is present at index " << index;

	//prompt user to enter index they wish to change

	cout << endl << endl << "Enter the index to be modified: ";
	cin >> index;

	key = modify_value(arr, index); 

	cout << endl << index << " Index changed to " << key;

	print_array(arr, length);

	//add user entered value

	add_new_value(arr, &length);

	print_array(arr, length);

	//remove used entered value

	remove_value(arr, &length);

	print_array(arr, length);

	system("pause");

	return 0;
}
