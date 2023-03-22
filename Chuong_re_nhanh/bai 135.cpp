
#include <iostream>
void inArray (int arr[], int size)
{
        for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    } 
}
void outArray (int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << i << "\t";
    }
}

void sortPositive (int arr[], int size)
{
    int a, b;
    for (int i = 0; i < size; i++)
    {
        a = arr[i];
        if ((a * -1) < 0)
        {
            std::cout << "first positive value position in array is: ";
            std::cout << i;
            break;
        }
        else if (i == size - 1)
        {
            std::cout << -1;
        }
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
