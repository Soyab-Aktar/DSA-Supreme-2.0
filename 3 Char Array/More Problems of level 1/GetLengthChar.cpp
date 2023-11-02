#include<iostream>
using namespace std;
int getLength(string name)
{
    int index=0;
    int length=0;

    while(name[index]!='\0')
    {
        length++;
        index++;
    }

    return length;
}
int main()
{
    string name;
    cout<<"Enter any text : ";
    getline(cin,name);

    int lengthch = getLength(name);

    cout<<"String length is : "<<lengthch;
}