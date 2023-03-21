
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

void swap (int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void sortB (int arr[], int size)
{
    int a, b;
    std::cout << "biggest value in array is: ";
    for (int i = 0; i < size; i++)
    {
        a = arr[0];
        b = arr[i];
        if (a < b)
        {
            swap (a, b); 
            arr[0] = a;
            std::cout << "\n" << a;
        }
    }

}
int main()
{
    const int size = 6;
    int arr[size] = {};
    // call function
    inArray (arr, size);
    sortB (arr, size);
    
    return 0;
}
