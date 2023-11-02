// get string length using predefined function

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[100];
    cout<<"Enter your charector : ";
    cin.getline(ch,100);

    cout<<"Entered input is : "<<ch<<endl;
    cout<<"Length is : "<<strlen(ch);

    return 0;
}