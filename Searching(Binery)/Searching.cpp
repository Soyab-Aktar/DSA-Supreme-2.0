// Searching element using binery

#include<iostream>
#include<vector>
using namespace std;

int searching(vector<int>&arr,int size,int target )
{
    int start = 0;
    int end = size-1;
    int mid = (start+(end-start))/2;

    while(start<=end)
    {
        if(arr[mid]==target)
        {
            return mid;
        }

        else if(target<arr[mid])
        {
            start= mid+1;
        }

        else if(target>arr[mid])
        {
            end=mid-1;
        }

        mid = (start+(end-start))/2;
    }

    return -1;
}
int main ()
{
    vector<int>arr{1,2,3,4,5,6,7,8,9};
    int size= arr.size();
    int target;
    cout<<"Enter your target from array : ";
    cin>>target;

    int lenearsearch = searching(arr,size,target);

    if(lenearsearch == -1)
    {
        cout<<"Not found .";
    }

    else
    {
        cout<<"Found";
    }
}