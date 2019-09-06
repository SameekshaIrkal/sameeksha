#include <iostream>
#include "Occurance.h"
using namespace std;
void Occurance::maxrepeat(int *list, int size,int big)
{
	int occur = 0;
	int large = big;
	for (int i = 0; i < size; i++)
	{
		if (list[i] == large)
		{
			occur++;
		}
	}
	cout << "number of occurance" << occur;
}
