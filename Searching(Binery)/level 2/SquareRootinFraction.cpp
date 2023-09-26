// Find Squar root of a number using binery method as a fraction output

#include <iostream>
using namespace std;
int squareRoot(int number, int precision)
{
    int start = 0;
    int end = number;
    int mid = start + (end - start) / 2;
    float ans = -1.0;

    while (start <= end)
    {
        if (mid * mid == number)
        {
            return mid;
        }
        else if (mid * mid < number)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = end - 1;
        }
        mid = start + (end - start) / 2;
    }

    // Calculate the fractional part
    float increment = 0.1;
    for (int i = 1; i <= precision; i++)
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
    int number;
    int precision;
    cout << "Enter your number for get square root : ";
    cin >> number;
    cout << "Enter your number for get precision : ";
    cin >> precision;

    int finalNumber = squareRoot(number, precision);

    cout << "Squar root of number is : " << finalNumber;

    return 0;
}