#include <iostream>

void enter(float arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}


void average_Num(float arr[], int n)
{
	int sum = 0;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			sum = arr[i] + sum;
			count++;
		}
	}
	sum = sum / count;
	std::cout << "value is: " << sum;
}
int main()
{
	const int n = 7;
	float Arr[n] = { 0 };
	enter(Arr, n);
	average_Num(Arr, n);
	return 0;
}
