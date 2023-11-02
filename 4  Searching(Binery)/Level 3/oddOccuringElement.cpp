// Finding odd occurin element is array

#include <iostream>
#include <vector>
using namespace std;
int oddOccur(vector<int> v, int size)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (start == end)
        {
            return start;
        }

        if (mid & 1)
        {
            if (v[mid - 1] == v[mid] && mid - 1 >= 0)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        else
        {
            if (v[mid + 1] == v[mid] && mid + 1 < size)
            {
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}
int main()
{
    vector<int> v{10, 10, 20, 20, 30, 30, 40, 40, 50, 60, 60, 80, 80, 90, 90};
    int size = v.size();

    int target = oddOccur(v, size);

    cout << "Odd Occuring element is in : " << target <<" Index"<< endl;
    cout << "Element is : " << v[target];

    return 0;
}