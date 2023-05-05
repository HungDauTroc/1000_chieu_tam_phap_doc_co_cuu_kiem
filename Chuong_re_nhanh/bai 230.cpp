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
	int count_Zero = 0;
	for (int k = 0; k < n; k++)
	{
		if (arr[k] == 0)
		{
			count_Zero++;
		}
	}
	if (count_Zero > 0)
	{
		std::cout << "this is value " << "0" << "\t" << "repetition: " << count_Zero << "\t" << ";";
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j] && arr[i] != 0)
			{
				count++;
				arr[j] = 0;
			}
		}
		if (arr[i] != 0)
		{
			std::cout << "this is value " << arr[i] << "\t" << "repetition: " << count << "\t" << ";";
		}
		count = 0;
	}
}
int main()
{
	const int n = 7;
	int Arr[n] = { 0 };
	enter(Arr, n);
	search(Arr, n);
	return 0;
}
