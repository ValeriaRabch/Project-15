#include<iostream>
using namespace std;

void FullingArray(int *array, int size) {
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100;
	}
}

void PrintArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
}