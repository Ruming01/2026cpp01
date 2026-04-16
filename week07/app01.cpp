#include <iostream>
using namespace std;

//2d array : statck memory & heap memory

int main() {

	int columns = 0;
	int* arr[3]; //stack memory
	cin >> columns;



	for (int i = 0; i < 3; i++) {
		arr[i] = new int[columns]; //heap memory
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < columns; j++) {
			arr[i][j] = i * j;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < columns; j++) {
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}

	return 0;
}