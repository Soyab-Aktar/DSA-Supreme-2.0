#include <iostream>
using namespace std;
string decodeMassage(string str, string text)
{
    // Create mapping

    char start = 'a';
    char mapping[300] = {0};

    for (auto ch : str)
    {
        if (ch != ' ' && mapping[ch] == 0)
        {
            mapping[ch] = start;
            start++;
        }
    }

    // Use mapping

    string ans;
    for (int i = 0; i < text.length(); i++)
    {
        char ch = text[i];

        if (ch == ' ')
        {
            ans.push_back(' ');
        }
        else
        {
            char decodedChar = mapping[ch];
            ans.push_back(decodedChar);
        }
    }

    return ans;
}
int main()
{
    string str;
    string text;
    cout << "Enter your key : ";
    getline(cin, str);

    cout << "Enter your massage :";
    getline(cin, text);

    string afterDecode = decodeMassage(str, text);

    cout << "After decode massage : " << afterDecode;

    return 0;
}