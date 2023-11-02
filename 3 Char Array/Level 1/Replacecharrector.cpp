#include <iostream>
using namespace std;
void replace(char ch[])
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char currch = ch[index];
        if (currch == '@')
        {
            ch[index] = ' ';
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

    replace(ch);

    return 0;
}