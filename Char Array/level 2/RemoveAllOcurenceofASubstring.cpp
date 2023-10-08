#include <iostream>
using namespace std;

bool isPalindrome(string str, int i, int j)
{
    while (i <= j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool canBePalindrome(string str)
{
    int left = 0;
    int right = str.length() - 1;

    while (left <= right)
    {
        if (str[left] == str[right])
        {
            left++;
            right--;
        }
        else
        {
            // Try removing the character at the left or the right and check if the resulting substring is a palindrome.
            bool option1 = isPalindrome(str, left + 1, right);
            bool option2 = isPalindrome(str, left, right - 1);

            return option1 || option2;
        }
    }

    // If we reach here, the string is already a palindrome or can be made one by removing one character.
    return true;
}

int main()
{
    string name;
    cout << "Enter some text: ";
    getline(cin, name);

    bool find = canBePalindrome(name);

    if (find)
    {
        cout << "Yes, it's a palindrome or can be made into one by removing one character." << endl;
    }
    else
    {
        cout << "No, it cannot be made into a palindrome by removing one character." << endl;
    }

    return 0;
}
