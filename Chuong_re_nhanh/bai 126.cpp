#include <iostream>

using namespace std;

void count(int S1[12])
{
    int S = 0;
    int Sc;
    for (int i = 0; i < 12; i++)
    {
        if (S1[i] < 0) 
        {
            S = S + S1[i];
        }
    }
    cout << "Sum of negative value in array: "<< S << "\n";
}
int main()
{
    int S1[12] = {9,3,4,-101,2010,3,-5,2002,-7,8,-23,12};
    count (S1);

    return 0;
}
