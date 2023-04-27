#include <iostream>
void enter(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

bool check_Num(int n)
{
	int flag = false;
	if (n == 2)
	{
		flag = true;
	}
	int count = 0;
	for (int i = 1; i <= n; i = i + 2)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if (count == 1)
	{
		flag = true;
	}
	return flag;
}

void average_Num(int arr[], int n)
{
	int sum = 0;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (check_Num(arr[i]) == true)
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
	int Arr[n] = { 0 };
	enter(Arr, n);
	average_Num(Arr, n);
	return 0;
}
