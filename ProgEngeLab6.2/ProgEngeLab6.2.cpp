#include "Find.h"
#include <iostream>

int main()
{
    Find<int> test(10);
    vector<int> array = test.getArr();
	for (int i = 0; i < array.size(); i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	int find = 0;
	cout << "Enter element to find: ";
	cin >> find;
	cout << test.find_by_value(find) << endl;;
}
