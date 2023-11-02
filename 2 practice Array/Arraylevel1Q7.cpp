//find min number from array
//return value

#include<iostream>
#include<limits.h>
using namespace std;

int findmin(int arr[5],int size)
{
    int minNum=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<minNum)
        {
            minNum=arr[i];
        }
    }
    return minNum;
}
int main()
{
    int arr[5]={2,9,5,1,50};
    int size =5;
    int minNumber = findmin(arr,size);
    cout<<"Minimum number is : "<<minNumber;
    return 0;
}