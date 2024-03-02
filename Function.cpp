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

int Min(int arr[], int size) {
	int element = arr[0];
	for (int i = 1; i < size; i++) {
		if (element > arr[i]) {
			element = arr[i];
		}
	}
	return element;
}

int Max(int arr[], int size) {
	int element = arr[0];
	for (int i = 1; i < size; i++) {
		if (element < arr[i]) {
			element = arr[i];
		}
	}
	return element;
}

void SortingArray(int* arr, int size) {
	int a;
	for (int i = 0; i < size; i++) {
		for (int j = 1; j < size; j++) {
			if (arr[j] < arr[j - 1]) {
				a = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = a;
			}
		}
	}
}