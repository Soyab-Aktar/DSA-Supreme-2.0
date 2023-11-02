//print array using function

#include<iostream>
using namespace std;

void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    printarray(arr,size);

    return 0;
}