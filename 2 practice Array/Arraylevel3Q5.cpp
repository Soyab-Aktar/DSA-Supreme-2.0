// Diagonal sum

#include <iostream>

using namespace std;

void diagonalsum(int arr[3][3], int col, int row)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum = sum + arr[i][j];
            }
        }
    }

    cout << "Your diagonal sum is : " << sum;
}
int main()
{
    int row = 3;
    int col = 3;

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    diagonalsum(arr, row, col);

    return 0;
}