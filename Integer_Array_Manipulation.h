//Author: Bradley Stradling

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>   // for srand and rand
#include <ctime>     // for time
using namespace std;

//******************************************************************************

//"_1D" shall label a function for 1 dimensional arrays

int integer_Input_Error_Check(int integer_Input, int input_Limit_Min,
	int input_Limit_Max, int flag);

void output_Array_1D(int arr[], int arr_Size);

void shift_Right_1D(int arr[], int arr_Size);

void shift_Left_1D(int arr[], int arr_Size);

int array_Total_1D(int arr[], int arr_Size);

void single_Element_1D(int arr[], int address);

int array_Average_1D(int arr[], int arr_Size);

void low_To_High_1D(int arr[], int arr_Size);

void high_To_Low_1D(int arr[], int arr_Size);

void randomize_Array_1D(int arr[], int arr_Size);