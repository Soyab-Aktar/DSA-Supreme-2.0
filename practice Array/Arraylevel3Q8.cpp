// Reverse Diagonal Array sum

#include <iostream>
using namespace std;

void reverseDiagonalsum(int arr[3][3], int row, int col)
{
    int sum = 0;
    int n = 3;
    // n represent No of rows and col ;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == n - i - 1)
            {
                sum += arr[i][j];
            }
        }
    }

    cout << "Reverse diagonal sum is : " << sum;
}
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int row = 3;
    int col = 3;

    reverseDiagonalsum(arr, row, col);

    return 0;
}