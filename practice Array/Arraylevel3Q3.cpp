//Linear Search of 2d array

#include <iostream>
using namespace std;

bool linearsearch(int arr[3][3], int col, int row,int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]==target)
            {
                return true;
            }
        }
        return false;
    }
    
}
int main()
{
    int row = 3;
    int col = 3;
    int target =400;

    int arr[3][3] = {
        {23, 45, 67},
        {12, 56, 97},
        {43, 50, 41}};

    bool finder = linearsearch(arr, row, col,target);
    if(finder)
    {
        cout<<"Target found .";
    }
    else
    {
        cout<<"Not found .";
    }

    return 0;
}