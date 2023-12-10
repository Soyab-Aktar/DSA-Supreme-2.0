#include <iostream>
#include <vector>
using namespace std;

using namespace std;

int rob(vector<int> &nums, int start, int end)
{
    if (start > end)
    {
        return 0;
    }
    else if (start == end)
    {
        return nums[start];
    }

    // Choose whether to rob the current house or not
    int robCurrent = nums[start] + rob(nums, start + 2, end);
    int skipCurrent = rob(nums, start + 1, end);

    // Return the maximum amount between robbing the current house and skipping it
    return max(robCurrent, skipCurrent);
}

int robCircular(vector<int> &nums)
{
    int n = nums.size();

    // Handle edge cases
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return nums[0];
    }

    // Compare the result of robbing the first house and skipping the last house
    return max(rob(nums, 0, n - 2), rob(nums, 1, n - 1));
}

int main()
{
    // Example usage
    vector<int> nums = {1, 2, 3, 1};
    cout << "Maximum amount: " << robCircular(nums) << endl;

    return 0;
}
