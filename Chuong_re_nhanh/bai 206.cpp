#include <iostream>
void enter(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

void summing(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int temp = arr[i];
		int temp2 = arr[i + 1];
		int temp3 = arr[i - 1];
		if (i == 0)
		{
			temp3 = arr[i];
		}
		if ((temp2 * (-1)) > 0)
		{
			temp2 = temp2 * (-1);
		}
		if ((temp3 * (-1)) > 0)
		{
			temp3 = temp3 * (-1);
		}
		if (temp > temp2 && temp > temp3)
		{
			sum = arr[i] + sum;
		}
	}
	std::cout << "value is: " << sum;
}
int main()
{
	const int n = 7;
	int Arr[n] = {0};
	enter(Arr, n);
	summing(Arr, n);
	return 0;
}
