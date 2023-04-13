#include <iostream>
//ham tim chu so xuat hien it nhat trong mang

void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void gen_var(int Arr[], int n, int Arr2[], int m)
{
	int count = 0;
	int temp = 0;
	int stay;
	int run = 0;
	stay = Arr2[0];
	int save = 0;
	//check 0 number
	int count_zero = 0;
	int Arr3[13] = {};
	for (int k = 0; k < n; k++)
	{
		if (Arr[k] == 0)
		{
			count_zero++;
		}
	}
	// count repeat num
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[i] == Arr[j] && Arr[j] != 0 && Arr[i] != 0)
			{
				count++;
				save = Arr[i];
				Arr[j] = 0;
				Arr3[i] = save;
			}
		}
		Arr2[i] = count;
		
		count = 0;
		run = Arr2[i];
		if (stay < run)
		{
			swap(stay, run);
			temp = i;
		}

	}
	//std::cout << Arr3[temp] << "\t";
	if (stay < count_zero)
	{
		std::cout << "this is the most repeat value: "<< " 0 " << "\t" << "repeat time" << "\t" << count_zero;
	}
	else
	{
		std::cout << "this is the most repeat value:" << Arr3[temp] << "\t " << "repeat time" << "\t" << stay;
	}
}

int main()
{
	const int n = 14;
	int Arr[n] = {6,7,6,7,4,7,4,3,7,7,5,6,4,3};
	int m = 14;
	int Arr2[14] = {};
	gen_var(Arr, n, Arr2, m);
	return 0;
}