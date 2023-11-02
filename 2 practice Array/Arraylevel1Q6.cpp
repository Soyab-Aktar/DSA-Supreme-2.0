// count 0's and 1's

#include <iostream>
using namespace std;

void counting(int arr[10], int size)
{
    int countzero = 0;
    int countone = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            countone++;
        }
        if (arr[i] == 0)
        {
            countzero++;
        }
    }

    cout << "Number of 0's is : " << countzero << endl;
    cout << "Number of 1's is : " << countone;
}
int main()
{
    int arr[10] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1};
    int size = 10;
    counting(arr, size);

    return 0;
}