#include <iostream>

void enter(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

bool counting(int n)
{
	int count = 0;
	int temp3 = n;
	while (temp3 != 0)
	{
		temp3 = temp3 / 10;
		count++;
	}
	int temp = n;
	int temp2 = n;
	int count2 = 0;
	int m = n;
	for (int i = 0; i < count / 2; i++)
	{
		// scan right to left
		temp = m % 10;
		m = m / 10;
		// scan left to right
		temp2 = temp2 / pow(10, count - (i + 1));
		temp2 = temp2 % 10;
		//compare
		if (temp == temp2)
		{
			count2++;
		}
		if (count2 == (count / 2))
		{
			return true;
		}
		std::cout << temp2 << "\t";
		temp2 = n;
	}
	return false;
}

void count_Num(int arr[], int n)
{
	int count = 0;


	for (int i = 0; i < n; i++)
	{
		if (counting(arr[i] == true))
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
	count_Num(Arr, n);
	return 0;
}
