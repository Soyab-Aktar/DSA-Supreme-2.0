// find first occuence of Array

#include <iostream>
#include <vector>
using namespace std;

int firstOccur(vector<int> &v, int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {

        if (v[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (v[mid] < target)
        {
            start = mid + 1;
        }
        else if (v[mid] > target)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }

    return ans;
}
int main()
{
    vector<int> v{1, 2, 3, 4, 4, 4, 8, 8, 8, 9};
    int size = v.size();
    int target;

    cout << "This is your Array - "
         << "1, 2, 3, 4, 4, 4, 8, 8, 8, 9 " << endl;
    cout << "Enter your target :";
    cin >> target;

    int occ = firstOccur(v, size, target);

    cout << "First occurence is : " << occ;

    return 0;
}