
#include <iostream>

using namespace std;

void inArr(int Arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
       std::cin >> Arr[i] ;
   }
}
void check2k(int Arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(Arr[i] == 1)
        {
            std::cout << Arr[i];
            break;
        }
        else if (Arr[i] % 2 == 0)
        {
            std::cout << Arr[i];
            break;
        }
        else
        {
            count++;
        }
    }
    if(count == n)
    {
        std::cout << 0;
    }
}

int main()
{
    const int n = 4;
    int Arr[n] = {0};
    inArr(Arr, n);
    check2k(Arr, n);

    return 0;
}
