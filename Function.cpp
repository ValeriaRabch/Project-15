#include<iostream>
using namespace std;

void FullingArrayInt(int *array, int size) {
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100;
	}
}

void FullingArrayFloat(float* array, int size) {
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100;
	}
}

void FullingArrayChar( char* array, int size) {
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100;
	}
}

void PrintArrayInt(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
}

void PrintArrayFloat(float arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
}

void PrintArrayChar(char arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
}

int MinInt(int arr[], int size) {
	int element = arr[0];
	for (int i = 1; i < size; i++) {
		if (element > arr[i]) {
			element = arr[i];
		}
	}
	return element;
}

float MinFloat(float arr[], int size) {
	float element = arr[0];
	for (int i = 1; i < size; i++) {
		if (element > arr[i]) {
			element = arr[i];
		}
	}
	return element;
}

char MinChar(char arr[], int size) {
	char element = arr[0];
	for (int i = 1; i < size; i++) {
		if (element > arr[i]) {
			element = arr[i];
		}
	}
	return element;
}

int MaxInt(int arr[], int size) {
	int element = arr[0];
	for (int i = 1; i < size; i++) {
		if (element < arr[i]) {
			element = arr[i];
		}
	}
	return element;
}

float MaxFloat(float arr[], int size) {
	float element = arr[0];
	for (int i = 1; i < size; i++) {
		if (element < arr[i]) {
			element = arr[i];
		}
	}
	return element;
}

char MaxChar(char arr[], int size) {
	char element = arr[0];
	for (int i = 1; i < size; i++) {
		if (element < arr[i]) {
			element = arr[i];
		}
	}
	return element;
}

void SortingArrayInt(int* arr, int size) {
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

void SortingArrayFloat(float* arr, int size) {
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

void SortingArrayChar(char* arr, int size) {
	char a;
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

void ChangeArrayInt(int* arr, int index, int x) {
	arr[index] = x;
}

void ChangeArrayFloat(float* arr, int index, float x) {
	arr[index] = x;
}

void ChangeArrayChar(char* arr, int index, char x) {
	arr[index] = x;
}
