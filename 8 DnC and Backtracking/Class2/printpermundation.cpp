#include <iostream>
using namespace std;
void printpermundation(string &str, int index)
{
    if (index >= str.length())
    {
        cout << str << " ";
        return;
    }

    for (int j = index; j < str.length(); j++)
    {
        swap(str[index], str[j]);
        // recursion
        printpermundation(str, index + 1);
        // Backtracking
        swap(str[index], str[j]);
    }
}
int main()
{
    string str = "abc";
    int index = 0;
    printpermundation(str, index);
    return 0;
}