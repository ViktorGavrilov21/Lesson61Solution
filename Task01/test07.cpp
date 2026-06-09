#include <iostream>
using namespace std;

void init(int* array, int size) {
	for (int i = 0; i < size; i++) {
		*(array + i) = rand() % 10;
	}
}

int main() {
	int size = 10;

	//cout << "Input size: ";
	//cin >> size;

	int array[10];

	//int* array = new int[size] {};

	init(array, size);

	for (int i = 0; i < size; i++) {
		//другой подход
		cout << array[i] << " ";
	}

	//delete[] array;


	return 0;
}