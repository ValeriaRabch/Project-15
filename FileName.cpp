#include<iostream>
using namespace std;

template <typename T>

T* FullingArray(T *arr, int size) {
	for (int i = 0; i <= size; i++) {
		arr[i] = rand() % 100;
	}
	return arr;
}

