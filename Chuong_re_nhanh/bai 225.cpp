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
	int temp = arr[0];
	for (int i = 0; i < n; i++)
	{
		int temp2 = arr[i];
		if (temp < temp2)
		{
			temp = temp2;
		}
	}
	int count = 0;
	for (int j = 0; j < n; j++)
	{
		if (arr[j] == temp)
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
	search(Arr, n);
	return 0;
}
