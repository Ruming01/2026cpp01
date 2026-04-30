#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char lines[80];
    cout << "한 줄을 입력하세요: ";
    cin.getline(lines, 80); // (엔터키만 구분자로 인식)
	// cin >> lines; // (스페이스바, 탭, 엔터키는 모두 구분자로 인식)
    cout << endl;
    cout << "출력: " << endl;
    cout << lines << endl;
    return 0;
}