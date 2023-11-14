#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int coinarr(vector<int>&arr,int amount , int size)
{
    if(amount==0)
    {
        return 0;
    }
    int mini = INT_MAX;
    int ans=INT_MAX;
}
int main()
{
    vector<int>arr{1,2,5};
    int size = arr.size();
    int amount;
    cout<<"Enter your amount :";
    cin>>amount;
    coinarr(arr,size,amount);
}