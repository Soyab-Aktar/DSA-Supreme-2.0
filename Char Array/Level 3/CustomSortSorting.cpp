#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Custom comparator function
bool compare(char char1, char char2, const string &order)
{
    // This will return true if the position of character1 in order string is
    // less than the position of character2 in order string.
    // When true is returned, char1 will be placed before char2 in the output string.
    return (order.find(char1) < order.find(char2));
}

string customSortString(string order, string s)
{
    sort(s.begin(), s.end(), [&order](char char1, char char2)
         { return compare(char1, char2, order); });
    return s;
}

int main()
{
    // Example usage:
    string order = "cba";
    string s = "abcd";
    string result = customSortString(order, s);

    cout << "Custom sorted string: " << result << endl;

    return 0;
}
