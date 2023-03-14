#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c;
	int del;
	int x1, x2;

	cin >> a >> b >> c;
	del = b * b - 4 * a * c;
	if (del < 0)
	{
		cout << "vo nghiem";
	}
	if (del == 0)
	{
		x1 = x2 = -b / 2*a;
	}
	if (del > 0)
	{
		x1 = (-b + (sqrt(del)) / 2 * a);
		x2 = (-b - (sqrt(del)) / 2 * a);
	}
	cout << x1 << "\n" << x2;


	return 0;
}