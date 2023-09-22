// Transpose Array

#include <iostream>
using namespace std;

void transpose(int arr[4][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
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
    int arr[4][4] = {
        {15, 25, 35, 60},
        {44, 54, 64, 20},
        {78, 88, 90, 30},
        {80, 90, 70, 60}};

    int row = 4;
    int col = 4;

    transpose(arr, row, col);

    return 0;
}