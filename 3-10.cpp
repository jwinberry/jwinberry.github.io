#include <iostream> 
#include "3-10.h"

using namespace std;

int main()
{

	Invoice invoice1{"Item 1",  "item 1 description", 5, 25};
	


	cout << "invoice1 part number: " << invoice1.getPartNum() << endl;
	cout << "invoice1 description: " << invoice1.getDescription() << endl;
	cout << "invoice1 quantity: " << invoice1.getQuantity() << endl;
	cout << "invoice1 price: " << invoice1.getPrice() << endl;
	cout << "invoice1 total: " << invoice1.getInvoiceAmount() << endl;
	cout << endl;

	invoice1.setPartNum("Item 2");
	invoice1.setDescription("Item 2 description");
	invoice1.setQuantity(25);
	invoice1.setPrice(25);

	cout << "invoice1 part number: " << invoice1.getPartNum() << endl;
	cout << "invoice1 description: " << invoice1.getDescription() << endl;
	cout << "invoice1 quantity: " << invoice1.getQuantity() << endl;
	cout << "invoice1 price: " << invoice1.getPrice() << endl;
	cout << "invoice1 total: " << invoice1.getInvoiceAmount() << endl;


} 