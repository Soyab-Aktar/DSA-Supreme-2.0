// input 5 size array
// print sum of elements of array

#include <iostream>
using namespace std;
int main()
{
    int size = 5, sum = 0;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter your element " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (int j = 0; j < size; j++)
    {
        sum = sum + arr[j];
    }

    cout << "Your Array's element sum is : " << sum;

    return 0;
}