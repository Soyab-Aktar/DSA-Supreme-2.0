// lenear search using function

#include <iostream>
using namespace std;

bool findelement(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
            break;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 4;
    bool finder = findelement(arr, size, target);
    if (finder)
    {
        cout << "Element found .";
    }
    else
    {
        cout << "Not found .";
    }

    return 0;
}