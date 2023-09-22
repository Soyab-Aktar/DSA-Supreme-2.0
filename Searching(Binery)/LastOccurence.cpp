// find last occurence

#include <iostream>
#include <vector>
using namespace std;

int lastOccur(vector<int> &arr, int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (arr[mid] < target)
        {
            start = mid + 1;
        }

        else if (arr[mid > target])
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 8, 8, 9, 9};
    int size = arr.size();
    int target;

    cout << "This is your Array - "
         << "1 ,2 ,3 ,4 ,5 ,5 ,5 ,6 ,7 ,8 ,8 ,8 ,9 ,9 " << endl;
    cout << "Enter your target :";
    cin >> target;

    int lastocc = lastOccur(arr, size, target);

    cout << "Your Target last occurence is : " << lastocc;

    return 0;
}