#include <iostream>

void input_Arr(int arr[], int n)
{
	std::cout << "please enter the array: ";
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
		if (arr[i] < (-12) || arr[i] > 15)
		{
			std::cout << "please enter number in range 0 to 15" << "\t";
			arr[i] = temp;
			std::cin >> arr[i];
		}
	}
}
void check_Condition(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int temp = arr[i];
		int temp2 = arr[i + 1];
		if ((temp2 * (-1)) > 0)
		{
			arr[i + 1] = temp2 * (-1);
		}
		if (temp > temp2)
		{
			std::cout << temp << "\t";
		}
	}
}
int main()
{
	const int n = 7;
	int Arr2[n] = {};
	input_Arr(Arr2, n);
	check_Condition(Arr2, n);
	return 0;
}
