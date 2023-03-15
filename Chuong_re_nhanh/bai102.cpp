#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int ngay ,thang, nam;
	
	cin >>ngay >> thang >> nam;
	while (ngay > 31)
	{
		cin >> ngay >> thang >> nam;
	}

	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
	{
		printf("thang co 31 ngay\n");
		if (ngay < 31)
		{
			ngay = ngay + 1;
			cout << ngay;
		}
		if (ngay == 31)
		{
			ngay = 1;
			cout << ngay;
		}
		return 0;
	}

	if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
	{
		printf("thang co 30 ngay\n");
		if (ngay < 30)
		{
			ngay = ngay + 1;
			cout << ngay;
		}
		if (ngay == 30)
		{
			ngay = 1;
			cout << ngay;
		}
		return 0;
	}

	//(nam % 100 == 0) && (nam % 400 != 0) => khong nhuan cua nam % 4 == 0

	if (nam % 4 == 0 )
	{
		cout << "thang co 29 ngay\n";
		if (ngay < 29)
		{
			ngay = ngay + 1;
			cout << ngay;
		}
		if (ngay == 29)
		{
			ngay = 1;
			cout << ngay;
		}
	}
	else if ((nam % 100 == 0) && (nam % 400 != 0))
	{
		cout << "thang co 28 ngay\n";
		if (ngay < 28)
		{
			ngay = ngay + 1;
			cout << ngay;
		}
		if (ngay == 28)
		{
			ngay = 1;
			cout << ngay;
		}
	}
	else
	{
		cout << "thang co 28 ngay\n";
		if (ngay < 28)
		{
			ngay = ngay + 1;
			cout << ngay;
		}
		if (ngay == 28)
		{
			ngay = 1;
			cout << ngay;
		}
	}

	return 0;
}