#include <iostream>
using namespace std;

//2d array : only heap memory

int main() {
	int rows = 0, columns = 0;
	int** arr = nullptr; 

	cin >> rows;
	cin >> columns;

	arr = new int* [rows]; // heap memory에 포인터 배열을 동적 할당

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[columns]; // heap memory에 정수 타입을 담는 배열 동적 할당
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			arr[i][j] = i * j;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}

	for (int i = 0; i < rows; i++) {
		delete[] arr[i]; // 각 행에 해당하는 배열을 해제
		arr[i] = nullptr; // 포인터를 nullptr로 초기화하여 dangling pointer 방지
	}

	delete[] arr;
	arr = nullptr; // 포인터를 nullptr로 초기화하여 dangling pointer 방지

	return 0;
}