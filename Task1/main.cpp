#include "util.h"

int main() {
	int size;
	cout << "Input size: ";
	cin >> size;

	int* array = create(size);

	if (array == NULL) {
		return -1;
	}

	init_random(array, size, -20, 50);

	print("Array: " + convert(array, size) + "\n");
	return 0;
}