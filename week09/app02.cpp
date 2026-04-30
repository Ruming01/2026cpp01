#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[] = "ACE";
	char b[] = "ACE";
	string c = "ACE";
	string d = "ACE";

	cout << strcmp(a, b) << '\n'; // -1, 0, 1 return
	cout << (c == d) << '\n'; // true, false return

    return 0;
}