
#include <iostream>
void inArray (float arr[], int size)
{
        for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    } 
}

void swap (float& a, float& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void sortMin (float arr[], int size)
{
    float a, b;
    std::cout << "minimum float value in array is: ";
    for (int i = 0; i < size; i++)
    {
        a = arr[0];
        b = arr[i];
        if (a > b)
        {
            swap (a, b); 
        }
    }
            std::cout << "\n" << a;
}
int main()
{
    const int size = 6;
    float arr[size] = {};
    // call function
    inArray (arr, size);
    sortMin (arr, size);
    
    return 0;
}
