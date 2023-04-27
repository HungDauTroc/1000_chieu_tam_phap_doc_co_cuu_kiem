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
	int count = 0;
	int x = 5;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			count++;
		}
	}
	std::cout << count;
}
int main()
{
	const int n = 5;
	int Arr[n] = { 0 };
	enter(Arr, n);
	count_Num(Arr, n);
	return 0;
}
