#include <iostream>
void inArray (int arr[], int size)
{
        for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    } 
}

void sortPositive (int arr[], int size)
{
    int a, b, m, temp;
    for (int i = 0; i < size; i++)
    {
        a = arr[i];
        b = arr[0];
        if (a % 2 == 0)
        {
            b = a;
            temp = i;
            break;
        }
        else if (a % 2 != 0)
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
        std::cout << "first even number position in array is: " << temp;
    }
}
int main()
{
    const int size = 6;
    int arr[size] = {};
    // call function
    inArray (arr, size);
    sortPositive (arr, size);
    
    return 0;
}
