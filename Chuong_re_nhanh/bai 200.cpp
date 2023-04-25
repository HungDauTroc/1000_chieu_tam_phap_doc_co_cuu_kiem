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
		sum = arr[i] + sum;
	}
	std::cout << "value is: " << sum;
}
int main()
{
	const int n = 9;
	int Arr[n] = {0};
	enter(Arr, n);
	summing(Arr, n);
	return 0;
}
