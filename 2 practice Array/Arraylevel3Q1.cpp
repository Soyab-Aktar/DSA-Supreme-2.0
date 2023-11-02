// Print array col wise

#include <iostream>
using namespace std;

void printArray(int arr[3][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int row = 3, col = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printArray(arr, col, row);

    return 0;
}