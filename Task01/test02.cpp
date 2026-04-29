#include <iostream>
using namespace std;

int main() {
	int size = 10;

	int* array = new int[size];

	for (int i = 0; i < size; i++)
	{
		*(array + i) = 0;
	}

	for (int i = 0; i < size; i++)
	{
		cout << *(array + i) << "\t";
	}

	return 0;
}