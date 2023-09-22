// lenear search of array
// find the target element

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 5, 9, 4, 7};
    int target = 10, size = 5;
    bool flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "Your target element is found.";
    }
    else
    {
        cout << "Not found .";
    }

    return 0;
}