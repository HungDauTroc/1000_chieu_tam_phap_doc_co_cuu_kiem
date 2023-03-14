#include <iostream>
using namespace std;

int main()
{
	float a, b, c;

	cin >> a >> b >> c;

	if (a < b && a < c)
	{
		cout << a << "\n";
		if (b < c)
		{
			cout << b << "\n" << c;
		}
		else
		{
			cout << c << "\n" << b;
		}
	}

	if (b < a && b < c)
	{ 
		cout << b << "\n";
		if (a < c)
		{
			cout << a << "\n" << c;
		}
		else
		{
			cout << c << "\n" << a;
		}
	}

	if (c < a && c < b)
	{
		cout << c << "\n";
		if (a < b)
		{
			cout << a << "\n" << b;
		}
		else
		{
			cout << b << "\n" << a;
		}
	}
	return 0;
}