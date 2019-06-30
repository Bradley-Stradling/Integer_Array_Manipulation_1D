// Array_Manipulation.cpp : This file contains the 'main' function. 
//Program execution begins and ends here.
//Author: Bradley Stradling

//******************************************************************************
#include "Integer_Array_Manipulation.h"

// int i shall be used as an iterator to count looping.
int main()
{
	int array_Size = 0;
	int array_Limit_Max = 100;//limits size of array
	int array_Limit_Min = 1;//sets array minimum size
	int array_Of_Numbers[100];//array size should match array_Limit_Max
	int array_Element_Input = 0;
	int selection = 0;
	int selection_Limit_Min = 0;
	int selection_Limit_Max = 8;
	int address = 0;
	int flag = 0; // used to flag input error
	int i = 0; //used for loop iteration
	int total = 0; //used for the sum of the array
	int average = 0; //used to store average of array
	
	//loop to initialize array to 1 to 10
	for (int i = 0; i < 10; i++)
	{
		array_Of_Numbers[i] = i + 1;
	}

	cout << "**********************************************************"
		<< "**********************" << endl;
	cout << "                      Welcome to Bradleys Array"
		<< " Manipulator!" << endl;
	cout << endl;

	cout << "Let's start by creating an array." << endl;

	cout << "Please enter a size for the array, \nthe max size for this "
		<< "program is currently set to " << array_Limit_Max << "." << endl;

	cout << "Array size -- < ";

	do {
		flag = 0;
		cin >> array_Size;
		flag = integer_Input_Error_Check(array_Size, array_Limit_Min,
			array_Limit_Max,  flag);
	} while (flag == 1);


	i = 0;
	do//start of array element assignment loop
	{
		cout << "Please enter a number for array element stored at "
			<< "[" << i << "]" <<"--> ";
		cin >> array_Element_Input;
		array_Of_Numbers[i] = array_Element_Input;
		i++;
	} while (i < array_Size);//end of array element assignment loop

	cout << "The array has been stored!" << endl;
	cout << endl;

	output_Array(array_Of_Numbers, array_Size);
	cout << endl;

	do// start of  main menu loop
	{
		address = 0;//reset element address

		//note if a menu selection option is added or removed
		//the selection_Limit_Max at start of main should match
		//the number of available options
		cout << "The available array manipulations are." << endl;
		cout << "" << endl;
		cout << "1. Shift all elements to the right, the last element "
			<< "to the first." << endl;
		cout << "2. Shift all elements to the left, the first element "
			<< "to the last." << endl;
		cout << "3. Determine and display the total of all array "
			<<"elements." << endl;
		cout << "4. Display a single element by array address." << endl;
		cout << "5. Determine and display the arrays average." << endl;
		cout << "6. Reorder an array lowest to highest." << endl;
		cout << "7. Reorder an array highest to lowest number." << endl;
		cout << "8. Randomize the order of the arrays elements." << endl;
		cout << "Please enter the number of the array manipulation \n" 
			<< "result you wish to see. Or 0 to exit the program." << endl;
		do
		{
			flag = 0;
			cin >> selection;
			flag = integer_Input_Error_Check(array_Size, selection_Limit_Min,
				selection_Limit_Max, flag);
		} while (flag == 1);
		cout << endl;

		//these if statements should be changed to a switch?
		if (selection == 1)
		{
			shift_Right(array_Of_Numbers, array_Size);
			cout << endl;
		}

		if (selection == 2)
		{
			shift_Left(array_Of_Numbers, array_Size);
			cout << endl;
		}

		if (selection == 3)
		{
			total = array_Total(array_Of_Numbers, array_Size);
			cout << "The total of all array elements is --<  "
				<< total << endl;
			cout << endl;
		}

		if (selection == 4)
		{
			cout << "What is the number of the element you wish to see? -->";
			cin >> address;
			while (address > 9)
			{
				cout << "Error! there are only 10 elements in this array."
					<< "Please eneter a number from 0 to 9. -->";
				cin >> address;
			}
			single_Element(array_Of_Numbers, address);
			cout << endl;
		}

		if (selection == 5)
		{
			average = array_Average(array_Of_Numbers, array_Size);
			
			cout << "The average of the array is --< " << average << endl;
			cout << endl;
		}

		if (selection == 6)
		{
			low_To_High(array_Of_Numbers, array_Size);
			cout << endl;
		}

		if (selection == 7)
		{
			high_To_Low(array_Of_Numbers, array_Size);
			cout << endl;
		}

		if (selection == 8)
		{
			randomize_Array(array_Of_Numbers, array_Size);
			cout << endl;
		}
	} while (selection != 0);//end of main menu loop

	return 0;
}
