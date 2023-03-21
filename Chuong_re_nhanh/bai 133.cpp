
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

void list (int arr[],int size)
{
    std::cout << "position of negative value in array is ";
    for (int i = 0; i < size; i++)
    {
        if ((arr[i]*(-1)) > 0)
        {
            std::cout << i << "\t";
        }
    }
}
int main()
{
    const int size = 6;
    int arr[size] = {};
    // call function
    inArray (arr, size);
    list (arr, size);
    
    return 0;
}
