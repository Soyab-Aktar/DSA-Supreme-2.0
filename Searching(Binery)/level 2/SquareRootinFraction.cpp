#include <iostream>
using namespace std;
double squareRoot(int number, int moreNum)
{
    int start = 0;
    int end = number;
    int mid = start + (end - start) / 2;
    double ans = -1.0;

    while (start <= end)
    {
        if (mid * mid == number)
        {
            return mid;
        }

        else if (mid * mid < number)
        {
            start = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    // Calculate the fractional part
    double increment = 1.0;
    for (int i = 1; i <= moreNum; i++)
    {
        while ((ans + increment) * (ans + increment) <= number)
        {
            ans += increment;
        }
        increment /= 10.0;
    }

    return ans;
}

int main()
{
    int number, moreNum;
    cout << "Enter your number : ";
    cin >> number;
    cout << "Enter your precision : ";
    cin >> moreNum;

    double finalNumber = squareRoot(number, moreNum);

    cout << "Square root of number is : " << finalNumber;
    return 0;
}