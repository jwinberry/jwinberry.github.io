#include <iostream> 
#include <iomanip>
using namespace std;

int minimum(int x, int y, int z);

int main()
{
	cout << "Enter 3 integer values: " << endl;
	int int1, int2, int3;
	cin >> int1 >> int2 >> int3;

	cout << "the minimum integer value is: "
	<< minimum(int1, int2, int3) << endl;
}

int minimum(int x, int y, int z)
{
	int minimumValue{x};

	if(y < minimumValue)
	{
		minimumValue = y;
	}

	if(z < minimumValue)
	{
		minimumValue = z;
	}

	return minimumValue;
}