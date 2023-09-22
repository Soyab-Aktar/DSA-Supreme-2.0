// sum

#include <iostream>

using namespace std;

void sum(int arr[3][3], int col, int row)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
    }

    cout << "Your sum is : " << sum;
}
int main()
{
    int row = 3;
    int col = 3;

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    sum(arr, row, col);

    return 0;
}