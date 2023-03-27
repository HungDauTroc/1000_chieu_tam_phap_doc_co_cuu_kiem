#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    int m = n;
    int Arr[n][n] = {};
    int i = 0;
    int j = 0;
    int var = 1;
    int temp = 0;
    int temp2 = 0;
    // main for loop
    for (int x = 0; x < 5; x++)
    {
        //left to right
        while(i < n - 1)
        {
           // if (Arr[j][i] != )
           // {
            Arr[j][i] = var;
            var++;
            i++;
            //}
        }
         //top to bot
         while ( j < n - 1)
         {
             Arr[j][i] = var;
             var++;
             j++;
         }
         //right to left
         for (i = n - 1; i > temp; i--)
         {
             Arr[j][i] = var;
             var++;
         }
         //bot to top
         temp++;
         for (j = n - 1; j > temp2; j--)
         {
             Arr[j][i] = var;
             var++;
         }
         temp2++;
        j = j + 1;
        i = i + 1;
        n = n - 1;
                    
    }
    for (int a = 0; a < m; a++)
    {
        for (int b = 0; b < m; b++)
        {
           std::cout << Arr[a][b] << "\t";
        }
        std::cout << "\n";
    } 
}
