#include <iostream>

int count(int n)
{
	int count = 0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return count;
}
void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int check_even(int a, int b, int &temporary)
{
	int temp = 0;
	if (a % 2 == 0)
	{
		if (a < b)
		{
			swap(a, b);
			temporary = b;
		}
	}
	return temporary;
}
void oddnum(int Arr[], int n, int Arr2[], int& m)
{
	int temp;
	int array_count = 0;
	int num_2 = Arr[0];
	int num_3 = Arr2[0];
	int varr = 0;
	for (int i = 0; i < n; i++)
	{
		int num = Arr[i];
		if (num % 2 != 0)
		{
			if (num < num_2)
			{
				swap(num, num_2);
				varr = num_2;
			}
		}
	}
	for (int j = 0; j < n; j++)
	{
		int number = Arr[j];
		check_even(number, varr, temp);
		Arr2[j] = temp;
		if (num_3 < temp)
		{
			swap(num_3, temp);
		}
	}
	std::cout << " so chan lon nhat nho hon moi gia tri le co trong mang la " << num_3 << "\t";
}

int main()
{
	const int n = 12;
	int Arr[n] = {25,10,125,13,62,46,13,79,81,2,8,6};
	int m = 12;
	int Arr2[12] = {};
	oddnum(Arr, n, Arr2, m);
	return 0;
}