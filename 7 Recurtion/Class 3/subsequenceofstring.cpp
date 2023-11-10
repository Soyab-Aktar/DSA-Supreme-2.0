#include <iostream>
using namespace std;
void subch(string name, string output, int index)
{
    if (index >= name.length())
    {
        cout << output << endl;
        return;
    }

    // 1st method

    // Exclude
    char ch = name[index];
    subch(name, output, index + 1);
    // Include
    output.push_back(ch);
    subch(name, output, index + 1);

    // 2nd method

    // //Include
    // char ch=name[index];
    // subch(name,output,index+1);
    // output.push_back(ch);
    // //Exclude
    // subch(name,output,index+1);
    // output.pop_back();
}
int main()
{
    string name;
    cout << "Enter your text :";
    getline(cin, name);
    string output = "";
    int index = 0;
    subch(name, output, index);
    cout << output;
    return 0;
}