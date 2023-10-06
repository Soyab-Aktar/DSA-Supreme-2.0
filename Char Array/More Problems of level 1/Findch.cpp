#include <iostream>
using namespace std;

bool findch(const string &name, const string &name1)
{
    size_t index = name.find(name1);

    if (index != string::npos)
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

    cout << "Enter your text: ";
    getline(cin, name);

    string name1;
    cout << "Enter text to find: ";
    getline(cin, name1);

    bool found = findch(name, name1);

    if (found)
    {
        cout << "Text is found." << endl;
    }
    else
    {
        cout << "Not found." << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;
// bool findch(string name)
// {
//     string name1;
//     cout << "Enter text to find : ";
//     getline(cin, name1);

//     int index = 0;
//     int count = 0;
//     for (int i = name1[index]; name1[index] != '\0'; i++)
//     {
//         for (int j = name[count]; name[count] != '\0'; j++)
//         {
//             if (name1[index] == name[count])
//             {
//                 return true;
//                 count++;
//             }
//             // else
//             // {
//             //     return false;
//             // }
//         }
//         index++;

//     }
//     return false;
// }
// int main()
// {
//     string name;

//     cout << "Enter your text : ";
//     getline(cin, name);

//     bool find = findch(name);

//     if (find == true)
//     {
//         cout << "Text is found .";
//     }
//     else
//     {
//         cout << "Not found";
//     }
//     return 0;
// }