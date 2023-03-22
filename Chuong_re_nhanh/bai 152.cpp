#include <iostream>
void inArray (int arr[], int size)
{
        for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    } 
}

bool comNum (int n)
{
    int S = 0;
    for (int j = 1; j < n; j++)
    {
        if (n % j == 0)
        {
            S = S + j;
        }
    }
    if (n == S)
    {
        return true;
    }
}

void sortCompleted (int arr[], int size)
{
    int a, b, m;
    int arrTemp[size];
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        a = arr[i];
        if (comNum(a) == true)
        {
            arrTemp[j] = a;
            if (arrTemp[j] < arrTemp[0])
            {
                arrTemp[0] = arrTemp[j];
            }
            j++;
        }
        else if (comNum(a) == false)
        {
            m++;
        }
    }
    if (m == size)
    {
        std::cout << -1;
    }
    else
    {
       std::cout << "min completed number in array is: " << arrTemp[0];
    }
}
int main()
{
    const int size = 6;
    int arr[size] = {};
    // call function
    inArray (arr, size);
    sortCompleted (arr, size);

    return 0;
}
