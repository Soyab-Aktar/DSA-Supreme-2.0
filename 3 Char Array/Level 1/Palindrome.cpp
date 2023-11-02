#include <iostream>
using namespace std;
int lenwhile(char ch[], int size)
{
    int sizeofch = 0;
    int i = 0;
    int length = 0;
    while (ch[i] != '\0')
    {
        sizeofch++;
        i++;
    }
    return sizeofch;
}
bool palindrom(char ch[], int lengthChwhile)
{
    int index = 0;
    int left = 0;
    int right = lengthChwhile - 1;
    while (ch[index] != '\0')
    {
        if (ch[left] == ch[right])
        {
            left++;
            right--;
        }
        else
        {
            return false;
        }
        index++;
    }
    return true;
}

int main()
{
    char ch[100];
    int size = 100;
    cout << "Enter your output :";
    cin.getline(ch, 100);
    int lengthChwhile = lenwhile(ch, size);
    bool find = palindrom(ch, lengthChwhile);

    if (find == true)
    {
        cout << "yes,its palindrome";
    }
    else
    {
        cout << "No,its not a palindrome";
    }

    return 0;
}