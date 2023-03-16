#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	
	int x;
	int y;
	cin >> x >> y ;
	int n = 1;

	for (int i = 1; i <= y; i++)
	{
		n = n * x;
		//cout << n << "\t";
	}
	cout << n;
	return 0;
}