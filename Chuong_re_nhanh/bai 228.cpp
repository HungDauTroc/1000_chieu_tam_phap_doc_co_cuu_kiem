#include <iostream>

void enter(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

void search(int arr[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int temp = arr[i];
		int temp2 = arr[i + 1];
		if (i == n - 1)
		{
			temp2 = 0;
		}
		if (temp * temp2 > 0)
		{
			if (temp * -1 > 0)
			{
				temp = temp * (-1);
				temp2 = temp2 * (-1);
			}
			if (temp2 > temp)
			{
				count++;
			}
		}
	}
	std::cout << count << "\t";
}
int main()
{
	const int n = 7;
	int Arr[n] = { 0 };
	enter(Arr, n);
	search(Arr, n);
	return 0;
}
