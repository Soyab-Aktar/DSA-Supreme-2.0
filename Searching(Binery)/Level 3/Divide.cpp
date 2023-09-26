// Divide 2 numbers by using binery

#include <iostream>
using namespace std;
int divide(int divisor, int divident)
{
    int start = 0;
    int end = divident;
    int mid = start + (end - start) / 2;
    int result = 0;

    while (start <= end)
    {

        if (mid * divisor == divident)
        {
            return mid;
        }
        else if (mid * divisor < divident)
        {
            result = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        
        mid = start + (end - start) / 2;
    }
    return result;
}
int main()
{
    int divisor, divident;
    cout << "Enter your divisor : ";
    cin >> divisor;
    cout << "Enter your divident : ";
    cin >> divident;

    int ans = divide(divisor, divident);

    cout << "Your Quotient is : " << ans;

    return 0;
}

// in negetive input
//  Divide 2 numbers by using binery

// #include <iostream>
// using namespace std;
// int divide(int divisor, int divident)
// {
//     int start = 0;
//     int end = divident;
//     int mid = start + (end - start) / 2;
//     int result = 0;

//     while (start <= end)
//     {
//         if (mid * divisor == divident)
//         {
//             return mid;
//         }
//         else if (mid * divisor < divident)
//         {
//             result = mid;
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return result;
// }
// int main()
// {
//     int divisor, divident;
//     cout << "Enter your divisor : ";
//     cin >> divisor;
//     cout << "Enter your divident : ";
//     cin >> divident;

//     int ans = divide(divisor, divident);

//     cout << "Your Quotient is : " << ans;

//     return 0;
// }
