
#include <iostream>

using namespace std;

int main()
{
    int length;
    int width;
    
    cout << "nhap chieu dai, chieu rong: " << "\n";
    cin >> length >> width ;
    for (int j = 1; j <= width; j++)
    {
        int p = 1;
        for (int i = 1; i < length + 1; i++)
        {
            if (i == p)
            {
                cout << "*" << "\t";
            }
            p++ ;
        }
    cout << "\n";
    } 
    
    cout << "question 2" << "\n" ;
    for (int j = 0; j < width; j++)
    {
        int p = 1;
        if (j == 0 || j == width - 1)
        {
          for (int i = 1; i < length + 1; i++)
            {
                if (i == p)
                {
                    cout << "*" << "\t";
                }
                p++ ;
            }
        }
        else
        {
        for (int i = 1; i < length + 1; i++)
            {
                if (p == 1 || p == length)
                {
                    cout << "*" << "\t";
                }
                else
                {
                    cout << " " << "\t";
                }
                p++ ;
            }  
        }
        cout  << "\n";
    }
    
    return 0;
}
