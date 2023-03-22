
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
    float temp;
    temp = a;
    a = b;
    b = temp;
}

void sortMin (float arr[], int size)
{
    float a, b, m;
    for (int i = 0; i < size; i++)
    {
        a = arr[0];
        b = arr[i];
        if (a > b)
        {
            swap(a, b);
            m = i;
        }
    }
    std::cout << "minimum value position in array : " << m;
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
