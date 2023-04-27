
#include <iostream>

void enter(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

void average_Num(int arr[], int n)
{
	int distance = 0;
	int sum = 0;
	int average_Number = 0;
	for (int i = 0; i < n - 1; i++)
	{
		int temp = arr[i];
		int temp2 = arr[i + 1];
		if (temp > temp2)
		{
			distance = temp - temp2;
		}
		else if (temp2 > temp)
		{
			distance = temp2 - temp;
		}
		sum = sum + distance;

	}
	average_Number = sum / (n - 1);
	std::cout << average_Number << "\t";
}
int main()
{
	const int n = 5;
	int Arr[n] = { 0 };
	enter(Arr, n);
	average_Num(Arr, n);
	return 0;
}
