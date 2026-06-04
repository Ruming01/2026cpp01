#include "person.h"

int main()
{

	Date date1(1991, 2, 8);
	Person person1("910208-1087743", date1);
	Date  date2(1989, 4, 28);
	Person person2("890428-1974395", date2);

	person1.print();
	person2.print();
	return 0;
}