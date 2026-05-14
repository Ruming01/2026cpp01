#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	string s1("abc");
	string s2 = "abcd";
	cout << (s1 == s2) << endl;
	cout << boolalpha << (s1 == s2) << endl; // true false 형태 지정
	cout << (s1 == s2) << endl; // 한번 지정되고 나면 형태 고정
	cout << noboolalpha; // 0 , 1 형태로 재변경
	cout << (s1 == s2) << endl;

	cin >> s2;
	cout << s2 << endl;
	//getline(cin, s2, ' ');
	// 남은 더미 값을 제거하기 위해 버퍼 비우기
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, s2);
	cout << s2 << endl;

	return 0;
}