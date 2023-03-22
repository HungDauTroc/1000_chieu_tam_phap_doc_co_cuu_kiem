#include <iostream>
#include <math.h>
void inArray (int arr[], int size)
{
        for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    } 
}

bool primeNum(int n)
{
    int i;
        if (n < 2)
    {
        return false;
    }
    else if (n > 2)
    {
        if (n % 2 == 0)
        {
            return false;
        }
        for (int i = 3; i <= sqrt(n); i += 2)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void sortPrime (int arr[], int size)
{
    int a, b, m, temp;
    int arrTemp[size];
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        a = arr[i];
        if (primeNum(a) == true)
        {
            arrTemp[j] = a;
            if (arrTemp[j] > arrTemp[0])
            {
                arrTemp[0] = arrTemp[j];
            }
            j++;
        }
        else if (primeNum(a) == false)
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
        std::cout << "biggest prime number in array is: " << arrTemp[0] << "\n";
    }
    
}
int main()
{
    const int size = 6;
    int arr[size] = {};
    // call function
    inArray (arr, size);
    sortPrime (arr, size);
    return 0;
}
