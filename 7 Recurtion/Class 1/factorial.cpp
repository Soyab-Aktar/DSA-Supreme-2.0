#include <iostream>
using namespace std;
int fac(int n)
{
    // Base case
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 1;
    }

    // Recursive relation

    int recurtionans = fac(n - 1);

    // Processing

    int finalans = n * recurtionans;

    return finalans;
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ansFac = fac(n);

    cout << "Factorial ans is : " << ansFac;

    return 0;
}