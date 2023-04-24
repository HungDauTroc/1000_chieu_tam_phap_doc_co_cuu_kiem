#include <iostream>

void input_Arr(float arr[], int n)
{
	std::cout << "please enter the array: ";
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
		if (arr[i] < (-14) || arr[i] > 10)
		{
			std::cout << "please enter number in range 0 to 10" << "\t";
			arr[i] = temp;
			std::cin >> arr[i];
		}
	}
}
void output_Arr(float arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i];
	}
}

void list(float arr[], int n)
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
	const int n = 5;
	float Arr2[n] = {};
	input_Arr(Arr2, n);
	list(Arr2, n);
	//output_Arr(Arr2, n);
	return 0;
}
