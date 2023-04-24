#include <iostream>

void input_Arr(int arr[], int n)
{
	std::cout << "please enter the array: ";
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
		if (arr[i] < 0 || arr[i] > 15)
		{
			std::cout << "please enter number in range 0 to 15" << "\t";
			arr[i] = temp;
			std::cin >> arr[i];
		}
	}
}
//void output_Arr(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		std::cout << arr[i];
//	}
//}
void check_Even(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			std::cout << arr[i] << "\t";
		}
	}
}
int main()
{
	const int n = 5;
	int Arr2[n] = {};
	input_Arr(Arr2, n);
	check_Even(Arr2, n);
	//output_Arr(Arr2, n);
	return 0;
}
