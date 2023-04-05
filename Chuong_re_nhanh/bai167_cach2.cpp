#include <iostream>

int count(int n)
{
	int m = n;
	int count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return count;
}
void oddnum(int Arr[], int n, int Arr2[], int& m)
{
	int temp;
	int arr;
	int counting = 0;
	int zero;
	int run;
	int array_count = 0;
	for (int i = 0; i < n; i++)
	{
		int num = Arr[i];
		int number = Arr[i];
		temp = count(num);
		for (int j = 0; j < temp; j++)
		{
			arr = num % 10;
			if (arr % 2 != 0)
			{
				counting++;
			}
			num = num / 10;
		}
		if (counting == temp)
		{
			Arr2[i] = number;
			array_count++;
		}
		counting = 0;
	}
	zero = Arr2[0];
	for (int l = 0; l < array_count; l++)
	{
		run = Arr2[l];
		if (run > zero)
		{
			zero = run;
		}
	}
	std::cout << "biggest number with all odd elements is: " << zero << "\t";
	m = array_count;
}

int main()
{
	const int n = 5;
	int Arr[n] = {73519,21456,315731,13131,13};
	int m = 5;
	int Arr2[5] = {};
	oddnum(Arr, n, Arr2, m);
	return 0;
}