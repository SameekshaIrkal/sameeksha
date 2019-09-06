#include <iostream>
#include "Maximum.h"
#include "Occurance.h"
using namespace std;
int main()
{
    int size, element[5];
    Maximum m1;
    Occurance o1;
    cout << "enter the size of array";
    cin >> size;
    cout << "enter array elements";
    for (int start = 0; start < size; start++)
    {
        cin >> element[start];
    }
    int b =m1.max(element, size);
    cout<<"maximum element"<<b;
    o1.maxrepeat(element, size,b);
    return 0;
}