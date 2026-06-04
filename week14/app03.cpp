
#include "invoice.h"

int main()
{

	Product product1("테이블", 150000);
	Product product2("의자", 70000);

	Invoice invoice(1000);
	invoice.add(1, product1);
	invoice.add(6, product2);
	invoice.print();
	return 0;
}