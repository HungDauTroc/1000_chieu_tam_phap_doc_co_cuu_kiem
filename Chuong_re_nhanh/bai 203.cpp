#include <iostream>
void enter(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

int check_Num (int n)
{
	int temp = 0;
	int temp2 = n;
	while (n != 0)
	{
		n = n / 10;
		temp++;
	}
	if (temp2 == 5)
	{
		temp2 = 0;
	}
	else
	{
		for (int i = 0; i < temp - 2; i++)
		{
			temp2 = temp2 / 10;
		}
		temp2 = temp2 % 10;
	}
	return temp2;
}

void summing(int arr[], int n)
{
	int sum = 0;
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		temp = check_Num(arr[i]);
		if (temp == 5)
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
