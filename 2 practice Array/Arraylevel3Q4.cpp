//Find maximum number

#include <iostream>
#include<limits.h>
using namespace std;

void findMax(int arr[3][3], int col, int row )
{
    int maxnum=INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]>maxnum)
            {
               maxnum = arr[i][j];
            }
        }
        
    }

    cout<<"Your maximum number is : "<<maxnum;
    
}
int main()
{
    int row = 3;
    int col = 3;
    

    int arr[3][3] = {
        {23, 45, 67},
        {12, 56, 97},
        {43, 50, 41}};

    findMax(arr, row, col);
    

    return 0;
}