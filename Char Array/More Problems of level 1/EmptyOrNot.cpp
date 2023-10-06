#include <iostream>
using namespace std;

int getLength(string name)
{
    int index = 0;
    int length = 0;

    while (name[index] != '\0')
    {
        length++;
        index++;
    }

    return length;
}

bool emptyOrNot(string name)
{
    int lengthch = getLength(name);

    if (lengthch == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string name;

    cout << "Enter any text : ";
    getline(cin, name);

    bool find = emptyOrNot(name);

    if (find == 1)
    {
        cout << "String is Empty .";
    }
    else
    {
        cout << "String have charectors .";
    }

    return 0;
}