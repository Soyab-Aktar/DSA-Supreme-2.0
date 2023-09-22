// input of 2D array

#include <iostream>
using namespace std;

void printArray(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "[ " << i << " ] "
                 << "[ " << j << " ] = ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int row = 3, col = 3;
    int arr[3][3];

    printArray(arr, row, col);

    return 0;
}