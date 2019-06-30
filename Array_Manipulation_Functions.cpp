//Function definitions for integer array manipulation

//Author: Bradley Stradling
//******************************************************************************
#include "Integer_Array_Manipulation.h"

// int i shall be used as an iterator to count looping.

//This function checks if cin is integer in range and flags if not
int integer_Input_Error_Check(int integer_Input, int selection_Limit_Min,
	int selection_Limit_Max, int flag)
{
	if (cin.fail())
	{
		cin.clear(); // clear input buffer to restore cin to a usable state
		cin.ignore(INT_MAX, '\n'); // ignore last input
		cout << "Please enter a number within range-- >> ";
		flag = 1;
	}
	if ((selection < selection_Limit_Min) ||
		(selection > selection_Limit_Max))
	{
		cout << "Error! Please enter a number within range-- >>";
		flag = 1;
	}

	return flag;
}

void output_Array(int arr[], int arr_Size)//displays the array
{
	for (int i = 0; i <= (arr_Size - 1); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return;
}

void shift_Right(int arr[], int arr_Size)//function definition selection 1
{
	int temp = arr[arr_Size - 1]; //stores last element to assign later
	for (int i = arr_Size-1; i >= 0; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[0] = temp;
	output_Array(arr, arr_Size);

	return;
}

void shift_Left(int arr[], int arr_Size)//function definition selection 2
{
	int temp = arr[0]; //stores first element to assign later
		for (int i = 0; i <= (arr_Size - 1); i++)
		{
			arr[i] = arr[i + 1]; // move all elements to the left
		}
	arr[arr_Size - 1] = temp;
	output_Array(arr, arr_Size);

	return;
}

int array_Total(int arr[], int arr_Size)//function definition selection 3
{
	int total = 0;
	for (int i = 0; i <= arr_Size - 1; i++)
	{
		total += arr[i];
	}

	return total;
}

void single_Element(int arr[], int address)//function definition selection 4
{
	cout << endl;
	cout << "The requested value at array element " << address
		<< " is --<  " << arr[address] << endl;

	return;
}

int array_Average(int arr[], int arr_Size)//function definition selection 5
{
	int total = 0;

	total = array_Total(arr, arr_Size);

	return total/arr_Size;
}

void low_To_High(int arr[], int arr_Size)//function definition selection 6
{
	int temp = 0;

	//loop to sort array in ascending order
	for (int i = 0; i < arr_Size; i++)
	{
		for (int j = i + 1; j < arr_Size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	output_Array(arr, arr_Size);

	return;
}

void high_To_Low(int arr[], int arr_Size)//function definition selection 7
{
	int temp = 0;

	//this loop moves in reverse from ascending
	//to sort the array in descending order
	for (int i = arr_Size-1; i >= 0; i--)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr[j] < arr[i])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	output_Array(arr, arr_Size);

	return;
}

void randomize_Array(int arr[], int arr_Size)//function definition 8
{
	int temp = 0;
	int random_Element_Position = 0;
	for (int i = 0; i < arr_Size; i++) {
		random_Element_Position = rand() % arr_Size;
		temp = arr[i]; 
		arr[i] = arr[random_Element_Position];
		arr[random_Element_Position] = temp;
	}
	output_Array(arr, arr_Size);

	return;
}