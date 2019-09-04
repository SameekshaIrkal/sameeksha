//Maximum element in list
#include <iostream>
using namespace std;
class Maximum
{
public:
	void max(int[], int);
};

void Maximum::max(int list[], int size)
{
	int big, index,occurance;
	occurance=list[0];
	big = list[0];
	for (index = 1; index < size; index++)
	{
		if (list[index] > big)
		{
			big = list[index];
			++ occurance;
		}
	}
	cout << "Maximum element is : " << big<<"\t No of occurance is : "<<occurance;
}

int main()
{
	int size, element[5];
	Maximum m1;
	cout << "enter the size of array";
	cin >> size;
	cout << "enter array elements";
	for (int start = 0; start < size; start++)
	{
		cin >> element[start];
	}
	m1.max(element, size);
	return 0;
}
