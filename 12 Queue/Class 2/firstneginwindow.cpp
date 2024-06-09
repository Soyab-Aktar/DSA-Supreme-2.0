#include <iostream>
#include <deque>
using namespace std;

void firstneg(int *arr, int k, int n)
{
    deque<int> dq;
    // Process first k element -> first window
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            dq.push_back(i);
        }
    }

    // Output for the first window
    if (!dq.empty())
    {
        cout << arr[dq.front()] << " ";
    }
    else
    {
        cout << "0 ";
    }

    // Process remaining windows-> removal and addition
    for (int i = k; i < n; i++)
    {
        // Removal of elements not part of the window
        if (!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }

        // Add new element
        if (arr[i] < 0)
        {
            dq.push_back(i);
        }

        // Print answer for the current window
        if (!dq.empty())
        {
            cout << arr[dq.front()] << " ";
        }
        else
        {
            cout << "0 ";
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, -5, 4, -1, -2, 0, 5};
    int n = 7;
    int k = 3;

    firstneg(arr, k, n);

    return 0;
}
