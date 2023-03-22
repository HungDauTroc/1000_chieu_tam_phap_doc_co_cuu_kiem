
#include <iostream>
void inArray (int arr[], int size)
{
        for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    } 
}
/*void outArray (int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << i << "\t";
    }
}*/

void sortPositive (int arr[], int size)
{
    int a, b, m;
    for (int i = 0; i < size; i++)
    {
        a = arr[i];
        b = arr[0];
        if (a % 2 == 0)
        {
            b = a;
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
        std::cout << "last even number in array is: " << b;
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
