#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num, var;
	cin >> num;
	var = num;

	if (num > 10)
	{
		cin >> num;
	}

	for (int i = 1; i < 11; i++)
	{
		num = var * i;
		cout << var << "\t" << "*" << "\t" << i << "\t" << "=" << "\t" << num << "\n";
	}
	return 0;
}