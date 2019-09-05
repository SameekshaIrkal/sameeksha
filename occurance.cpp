
#maximum
#include <iostream>
using namespace std;
class  occurance
{
    int big;
public:
	void max(int[], int);
    void repeat(int[],int);
    
};

void occurance::max(int list[], int size)
{
	int index,occur;
    occur=0;
	big = list[0];
	for (index = 1; index < size; index++)
	{
		if (list[index] > big)
		{
			big = list[index];
		
		}
	}
    cout<<"Maximum "<<big;
    
}

void occurance::repeat(int list[],int size)
{
    int occur=0;
    int large=big;
    for(int i=0;i<size;i++)
    {
        if(list[i]==large)
        {
            occur=occur++;
        }
    }
    cout<<"number of occurance"<<occur;

}

int main()
{
	int size, element[5];
	 occurance m1;
	cout << "enter the size of array";
	cin >> size;
	cout << "enter array elements";
	for (int start = 0; start < size; start++)
	{
		cin >> element[start];
	}
	m1.max(element, size);
    m1.repeat(element,size);
	return 0;
}
