#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"function.h"
using namespace std;

int main() {
	int const size = 10;
	int choose;
	cout << "Choose type masive \n1 - int\n2 - float\n3 - char"; cin >> choose;
	while (true) {
		int a, index, b;
		if (choose == 1) {
			int arr[size];
			cout << "Choose  \n1 - Fulling\n2 - Print\n3 - Min element \n4 - Max element \n5 - Sorting array \n6 - Change element"; cin >> a;
			if (a == 1) {
				FullingArray(arr, size);
			}
			if (a == 2) {
				PrintArray(arr, size);
				cout << endl;
			}
			if (a == 3) {
				cout << Min(arr, size) << endl;
			}
			if (a == 4) {
				cout << Max(arr, size) << endl;
			}
			if (a == 5) {
				SortingArray(arr, size);
			}
			if (a == 6) {
				cout << "Which element ?"; cin >> index;
				cout << "What?"; cin >> b;
				ChangeArray(arr, index - 1, b);
			}
			
		}
	}
	
	
}