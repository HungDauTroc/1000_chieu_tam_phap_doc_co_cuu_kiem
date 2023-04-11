#include <iostream>

int count(int n)
{
	int count = 0;
	while (n != 0)
	{
		n = n / 5;
		count++;
		if (n < 5)
		{
		    break;
		}
	}
//	std::cout << count;
	return count;
}
void oddnum(int Arr[], int n, int Arr2[], int& m)
{
	int temp;
	int zero;
	int run;
	int array_count = 0;
	for (int i = 0; i < n; i++)
	{
		float num = Arr[i];
		int number = Arr[i];
		temp = count(num);
		for (int j = 0; j < temp; j++)
		{
			num = num / 5;
		}
			if (num == 1)
			{
			Arr2[i] = number;
			array_count++;
			}
	}
	zero = Arr2[0];
	for (int l = 0; l <= array_count; l++)
	{
		run = Arr2[l];
		if (run > zero)
		{
			zero = run;
		}
	}
    std::cout << "biggest number have the form 5k is: " << zero << "\t";
	m = array_count;
}

int main()
{
	const int n = 5;
	int Arr[n] = {25,625,15,125};
	int m = 5;
	int Arr2[5] = {};
	oddnum(Arr, n, Arr2, m);
	return 0;
}
