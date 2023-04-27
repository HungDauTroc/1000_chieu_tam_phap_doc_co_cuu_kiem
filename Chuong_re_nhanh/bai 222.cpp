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
	for (int i = 0; i < n; i++)
	{
		int temp = arr[i - 1];
		int temp2 = arr[i];
		int temp3 = arr[i + 1];
		if (i == 0)
		{
			temp = temp2;
		}
		if (temp2 > temp && temp2 > temp3)
		{
			count++;
		}
		if (temp2 < temp && temp2 < temp3)
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
