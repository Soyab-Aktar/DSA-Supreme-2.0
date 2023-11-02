// Searching in 2d array by binery

#include <iostream>
#include <vector>
using namespace std;

bool searching(vector<vector<int>>&arr, int target)
{
    int row=arr.size();
    int col=arr[0].size();
    int n=row*col;

    int start = 0;
    int end = n-1;
    int mid= start+(end-start)/2;

    while(start<=end)
    {
        int rowIndex=mid/col;
        int colIndex=mid%col;
        int currentNumber=arr[rowIndex][colIndex];

        if(currentNumber==target)
        {
            return true;
        }
        else if(currentNumber<target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }

    return false;

}
int main()
{
    vector<vector<int>> arr{
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15 }
    };
    int target;
    cout<<"Enter your target .";
    cin>>target;

    bool find = searching(arr,target);

    if(find==true)
    {
        cout<<"Found .";
    }
    else
    {
        cout<<"Not found .";
    }

    return 0;
}
    