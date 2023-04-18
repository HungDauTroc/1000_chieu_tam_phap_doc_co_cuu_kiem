#include <iostream>
//ham tim cac cap so thoa dk a <= b

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
bool check_uoc(int a, int b)
{
	if (a % b != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void check_Diff(int Arr[], int n, int Arr2[], int &m)
{
	int count = Arr[0];
	int arr_counting = 0;
	for (int i = 0; i < n; i++)
	{
		int count_2 = Arr[i];
		swap(count, count_2);
		for (int j = 0; j < n; j++)
		{
			int count_3 = Arr[j];
			if (check_uoc(count_3, count) == true)
			{
					Arr2[j] = count_3;
					arr_counting++;
			}
		}
	}
	m = arr_counting;
}
void gen_var(int Arr2[], int m)
{
	int count = Arr2[0];
	std::cout << "cac cap so khac nhau tung doi mot thoa dk a <= b: ";
	for (int i = 0; i < m ; i++)
	{
		std::cout << Arr2[i] << "\t";
		int count_3 = Arr2[i];
		swap(count, count_3);
		for (int j = 0; j < m; j++)
		{
			int count_2 = Arr2[j];
			if (count < count_2)
			{
				std::cout << count << count_2 << "\t";
			}
		}
	}
}
int main()
{
	const int n = 9;
	int Arr[n] = {5,1,4,6,2,7,3,0};
	int m;
	int Arr2[n] = {};
	check_Diff(Arr, n, Arr2, &m);
	std::cout << Arr2[2] << "\t";
	gen_var(Arr2, m);
	return 0;
}