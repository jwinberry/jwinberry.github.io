#include <string> 
#include <iostream>

using namespace std;

class Invoice
{
public:
	Invoice(string partNum, string descript, int quant, int cost)
	:partNumber{partNum}, description{descript}
	{
		if (quant > 0) {
			quantity = quant;
		}
		if (cost > 0) {
			price = cost;

		}
	}

	string getPartNum() {
		return partNumber;
	}

	void setPartNum(string partNum)
	{
		partNumber = partNum;
	}
	string getDescription()
	{
		return description;
	}
	void setDescription(string descript)
	{
		description = descript;
	}

	int getQuantity()
	{
		return quantity;
	}
	void setQuantity(int quant)
	{
		quantity = quant;
	}
	int getPrice()
	{
		return price;
	}
	void setPrice(int cost)
	{
		price = cost;
	}

	int getInvoiceAmount()
	{
		invoiceAmount = price * quantity;
		return invoiceAmount;
	}
private:
	string partNumber;
	string description;
	int quantity = 0;
	int price = 0;
	int invoiceAmount = 0;
	
};