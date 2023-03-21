#include <iostream>
#include <string.h>


void inputArray(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

void displayArray(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\t";
    }
}

void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\t";
    }
}

void listArray(int inArr[], int inSize, int outArr[], int& outSize)
{
    int j = 0;
    for (int i = 0; i < inSize; i++)
    {
        if (inArr[i] % 2 == 0)
        {
             outArr[j] = inArr[i];
             j++;
        }
    }
    outSize = j;
}

int main()
{
    const int size = 6;
    /*float arr[size] = {0};
    inputArray(arr, size);
    displayArray(arr, size);
    std::cout << "\n";*/
    int arr1[size] = {};
    inputArray(arr1, size);
    int outArr[size] = { 0 };
    int outSize = -1;
    listArray(arr1, size, outArr, outSize);
    displayArray(outArr, outSize);
    std::cout << "\nOut size: " << outSize << std::endl;

    return 0;
}