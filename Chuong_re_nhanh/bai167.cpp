#include <iostream>
#include <string.h>

void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\t";
    }
}

void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

bool checkOdd(int n)
{
    int flag = false;
    int count = 0;
    int m = n;
    int k = m;
    int temp = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    for (int i = 0; i <= count; i++)
    {
        m = m % 10;
        if (m % 2 != 0)
        {
            temp++;
        }
        m = k / 10;
        k = k / 10;
    }
    if (temp == count)
    {
        flag = true;
    }
    return flag;
}
void compare(int Arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int b = Arr[0];
        int a = Arr[i];
        if (a > b)
        {
            swap(a, b);
        }
    }
    std::cout << Arr[0];
}
void listArray(int inArr[], int n, int outArr[], int& out)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkOdd(inArr[i]) == true)
        {
            for (int j = 0; j < n; j++)
            {
                outArr[j] = inArr[i];
            }
            count++;
        }
    }
    out = count;
}

int main()
{
    const int n = 5;
    int Arr[n] = {};
    int outArr[n] = {};
    int out = 5;
    inputArray(Arr, n);
    listArray(Arr, n, outArr, out);
    compare(outArr, out);

    return 0;
}