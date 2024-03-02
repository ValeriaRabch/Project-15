#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"function.h"
using namespace std;

int main() {
	int const size = 10;
	int arr[size];
	FullingArray(arr, size);
	PrintArray(arr, size);
	cout << endl << Min(arr, size) << endl;
	cout << Max(arr, size) << endl;
}