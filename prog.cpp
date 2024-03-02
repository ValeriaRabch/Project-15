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
			int arr1[size];
			cout << "Choose  \n1 - Fulling\n2 - Print\n3 - Min element \n4 - Max element \n5 - Sorting array \n6 - Change element"; cin >> a;
			if (a == 1) {
				FullingArrayInt(arr1, size);
			}
			if (a == 2) {
				PrintArrayInt(arr1, size);
				cout << endl;
			}
			if (a == 3) {
				cout << MinInt(arr1, size) << endl;
			}
			if (a == 4) {
				cout << MaxInt(arr1, size) << endl;
			}
			if (a == 5) {
				SortingArrayInt(arr1, size);
			}
			if (a == 6) {
				cout << "Which element ?"; cin >> index;
				cout << "What?"; cin >> b;
				ChangeArrayInt(arr1, index - 1, b);
			}
		}
		if (choose == 2) {
			float arr2[size];
			cout << "Choose  \n1 - Fulling\n2 - Print\n3 - Min element \n4 - Max element \n5 - Sorting array \n6 - Change element"; cin >> a;
			if (a == 1) {
				FullingArrayFloat(arr2, size);
			}
			if (a == 2) {
				PrintArrayFloat(arr2, size);
				cout << endl;
			}
			if (a == 3) {
				cout << MinFloat(arr2, size) << endl;
			}
			if (a == 4) {
				cout << MaxFloat(arr2, size) << endl;
			}
			if (a == 5) {
				SortingArrayFloat(arr2, size);
			}
			if (a == 6) {
				cout << "Which element ?"; cin >> index;
				cout << "What?"; cin >> b;
				ChangeArrayFloat(arr2, index - 1, b);
			}
		}
	}
	
	
}