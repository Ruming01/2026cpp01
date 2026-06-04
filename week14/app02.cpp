#include "employee.h"

int main()
{

  Employee employee1("김", "대림", 22120);
  Employee employee2("최", "대림", 46700);
  Employee employee3("이", "대림", 12500);

  employee1.print();
  employee2.print();
  employee3.print();
  return 0;
}  