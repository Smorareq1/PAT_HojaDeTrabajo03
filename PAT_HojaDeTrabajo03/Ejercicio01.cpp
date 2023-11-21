#include "Ejercicio01.h"


int Ejercicio01::findMin(int nums[], int n)
{
	int min = nums[0]; //Asume que el primer elemento es el menor
	for (int i = 1; i < n; i++)
	{
		if (nums[i] < min)
		{
			min = nums[i];
		}
	}
	return min;
}
