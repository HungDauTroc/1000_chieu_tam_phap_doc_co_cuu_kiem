#include <iostream>

void enter(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

void count_Num(int arr[], int n)
{
	int count_odd = 0;
	int count_even = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
		{
			count_odd++;
		}
		else if (arr[i] % 2 == 0)
		{
			count_even++;
		}
	}
	if (count_odd == count_even)
	{
		std::cout << 0;
	}
	else if (count_odd < count_even)
	{
		std::cout << -1;
	}
	else if (count_even < count_odd)
	{
		std::cout << 1;
	}
}
int main()
{
	const int n = 5;
	int Arr[n] = { 0 };
	enter(Arr, n);
	count_Num(Arr, n);
	return 0;
}
