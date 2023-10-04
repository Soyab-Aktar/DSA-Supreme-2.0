#include <iostream>
using namespace std;
void convert(char ch[])
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char currch = ch[index];
        if (currch >= 'A' && currch <= 'Z')
        {
            ch[index] = currch - 'A' + 'a';
        }
        index++;
    }
    cout << "Afer conversition is : " << ch;
}

int main()
{
    char ch[100];
    cout << "Enter your output :";
    cin.getline(ch, 100);

    convert(ch);

    return 0;
}