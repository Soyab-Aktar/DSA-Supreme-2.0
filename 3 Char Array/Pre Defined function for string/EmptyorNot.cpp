#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter any words : ";
    getline(cin,name);

    cout<<"Your ouput is : "<<name<<endl;
    
    cout<<name.empty(); // if empty = 1 , else =0

    return 0;
}