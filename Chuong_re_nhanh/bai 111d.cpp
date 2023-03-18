
#include <iostream>

using namespace std;

int main()
{
    int h;
    cout << "nhap h:" << "\t";
    cin >> h;
    
    int constant = 1;
    int c = 1;
   
    cout << "\t" << "*" << "\n";
    for (int i = 0; i < h - 2; i++)
    {
        c = c + 1;  
        
        for (int j = 0; j < h ; j++)
        {
            if (j == c || j == constant)
            {
                cout << "*" << "\t";
            }
            else 
            {
                cout << " " << "\t";
            }
        }
        cout << "\n";
    }
    for (int j = 0; j < h; j++)
    {
        cout << "\t" << "*" ;
    }
    return 0;
}
