//Missing Element

#include<iostream>
#include<vector>

using namespace std;
void missing (vector<int>&arr,int size)
{
    int sum =0;
    for(int index =0;index<size;index++)
    {
        sum+=arr[index];
    }
    int totalSum = (size*(size+1))/2;
    int missingNum = totalSum-sum;

    cout<<"Missing index is : "<<missingNum;
}
int main()
{
    vector<int>arr{1,2,3,4,5,7,8,9};
    int size = arr.size();

    missing(arr,size);

    return 0;
}