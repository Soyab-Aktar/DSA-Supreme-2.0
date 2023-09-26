//Find Squar root of a number using binery method as a integer output

#include<iostream>
using namespace std;
int squareRoot(int number)
{
    int start = 0;
    int end = number;
    int mid = start+(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(mid*mid == number)
        {
            return mid;
        }
        else if(mid*mid <number)
        {
            ans = mid;
            start=mid+1;
        }
        else
        {
            end=end-1;
        }
        mid= start+(end-start)/2;

    }

}
int main()
{
    int number;
    cout<<"Enter your number for get square root : ";
    cin>>number;

    int finalNumber = squareRoot(number);

    cout<<"Squar root of number is : "<<finalNumber;

    return 0;
}