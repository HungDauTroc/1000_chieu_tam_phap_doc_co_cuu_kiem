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
    int a, b, m;
    for (int i = 0; i < size; i++)
    {
        a = arr[i];
        b = arr[0];
        if (primeNum(a) == true)
        {
           std::cout << "first prime number position in array is: " << a << "\n";
           break;
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
