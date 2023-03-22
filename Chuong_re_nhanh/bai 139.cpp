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
    int a, b, m, temp;
    for (int i = 0; i < size; i++)
    {
        a = arr[i];
        b = arr[0];
        
        if (comNum(a) == true)
        {
            temp = i;
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
       std::cout << "last completed number position in array is: " << temp;
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
