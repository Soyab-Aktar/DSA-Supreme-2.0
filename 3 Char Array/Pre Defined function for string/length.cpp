#include<iostream>
using namespace std;
int main()
{
    string name;
    
    cout<<"Enter any words : ";
    getline(cin,name);

    cout<<"Your ouput is : "<<name<<endl;
    cout<< "Length of string is : "<< name.length();

    return 0;
}