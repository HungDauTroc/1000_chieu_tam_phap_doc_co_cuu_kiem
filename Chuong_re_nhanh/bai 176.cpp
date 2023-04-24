#include <iostream>


void input_Arr(int arr[], int n)
{
	std::cout << "please enter the array: ";
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

void list(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] * (-1)) > 0)
		{
			std::cout << arr[i] << "\t";
		}
	}
}
int main()
{
	const int n = 9;
	int Arr2[n] = {};
	input_Arr(Arr2, n);
	list(Arr2, n);
	//output_Arr(Arr2, n);
	return 0;
}
