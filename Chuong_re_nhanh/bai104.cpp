#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int ngay, thang, nam, i, S = 0;
	
	cin >>ngay >> thang >> nam;
	while (ngay > 31)
	{
		cin >> ngay >> thang >> nam;
	}
		int k = 1;
		while (k < thang)
		{
			if (k == 1 || k == 3 || k == 7 || k == 8 || k == 10 || k == 12)
			{
				i = 31;
			}
			else if (k == 4 || k == 6 || k == 9 || k == 11)
			{
				i = 30;
			}
			else
			{
				if (nam % 4 == 0)
				{
					i = 29;
				}
				else
				{
					i = 28;
				}
			}
			S = S + i ;
			k++;
		}
		
		ngay = S + ngay;
		cout << ngay;
	

	return 0;
}