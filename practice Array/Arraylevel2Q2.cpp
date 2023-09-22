// Print all Pairs

#include <iostream>
using namespace std;

void pairing(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int z = 0; z < size; z++)
            {
                cout << arr[i] << "," << arr[j] << "," << arr[z] << endl;
            }
            cout << endl;
        }
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int size = 4;

    pairing(arr, size);
}