#include <iostream>
#include <math.h>

using namespace std;

void inMaTran(int arr[], int hang, int cot)
{
    for (int r = 0; r < hang; r++)
    {
        for (int c = 0; c < cot; c++)
        {
            printf("% 3d\t", arr[r * cot + c]);
        }
        printf("\n");
    }
}

int main()
{
    cout << "Nhap hang: ";
    int r;
    cin >> r;
    if (r < 2 && r > 100)
    {
        cout << "Nhap hang nho thoi\n";
    }
    cout << "Nhap cot: ";
    int c;
    cin >> c;
    if (c < 2 && c > 100)
    {
        cout << "Nhap m nho thoi\n";
    }

    int arr[100 * 100];
    int value = 1;
    int hang = r - 1;
    int cot = c - 1;
    int index = 0;
    while (value <= r * c)
    {
        // trai sang phai
        for (int i = index; i <= cot; i++)
        {
            arr[index * c + i] = value++;
        }

        // tren xuong duoi
        for (int i = index + 1; i <= hang; i++)
        {
            arr[i * c + cot] = value++;
        }

        // phai sang trai
        for (int i = cot - 1; i >= index && value <= r * c; i--)
        {
            arr[hang * c + i] = value++;
        }

        // duoi len tren
        for (int i = hang - 1; i > index && value <= r * c; i--)
        {
            arr[i * c + index] = value++;
        }
        index++;
        hang--;
        cot--;
    }

    inMaTran(arr, r, c);

}