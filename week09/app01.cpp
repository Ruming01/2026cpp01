#include <iostream>
#include <cstring> // c언어 string.h
using namespace std;


int main()
{
	//char s1[] = { 'A', 'C', 'E', '\0' };
	//char s1[] = { 'A', 'C', 'E'}; // null문자 부재로 오류 발생
	//char s1[] = { 'A', 'C', 'E', NULL };
	//char s1[] = { 'A', 'C', 'E', 0 };
	char s1[] = "ACE"; // null문자 자동 추가
	cout << s1 << '\n'; 

	return 0;
}