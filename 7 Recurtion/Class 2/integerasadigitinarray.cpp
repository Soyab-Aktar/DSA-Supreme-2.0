#include <iostream>
using namespace std;
void printdigit(int num)
{
    if (num == 0)
    {
        return;
    }
    int digit = num % 10;
    num = num / 10;
    printdigit(num);
    cout << digit << " .";
}
int main()
{
    int num;
    cout << "Enter your number :";
    cin >> num;
    printdigit(num);
}