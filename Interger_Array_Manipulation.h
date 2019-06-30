//Author: Bradley Stradling

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>   // for srand and rand
#include <ctime>     // for time
using namespace std;

//******************************************************************************


int integer_Input_Error_Check(int integer_Input, int selection_Limit_Min,
	int selection_Limit_Max, int flag);

void output_Array(int arr[], int arr_Size);

void shift_Right(int arr[], int arr_Size);

void shift_Left(int arr[], int arr_Size);

int array_Total(int arr[], int arr_Size);

void single_Element(int arr[], int address);

int array_Average(int arr[], int arr_Size);

void low_To_High(int arr[], int arr_Size);

void high_To_Low(int arr[], int arr_Size);

void randomize_Array(int arr[], int arr_Size);