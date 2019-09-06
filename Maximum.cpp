#include <iostream>
#include "Maximum.h"
int Maximum::max(int *list, int size)
{
	int big, index;
	big = list[0];
	for (index = 1; index < size; index++)
	{
		if (list[index] > big)
		{
			big = list[index];
		}
	}
	return big;
}