// # # # # #   # # # # # 
// # # # #       # # # # 
// # # #           # # # 
// # #               # # 
// #                   # 
// #                   # 
// # #               # # 
// # # #           # # # 
// # # # #       # # # # 
// # # # # #   # # # # # 
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<< "Enter a number : ";
    cin>>n;

    //up

    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row;col++)
        {
            cout<< "# ";
        }


        for(int col=0;col<row+1;col++)
        {
            cout<<"  ";
        }
        for(int col=0;col<row;col++)
        {
            cout<<"  ";
        }

        for(int col=0;col<n-row;col++)
        {
            cout<<"# ";
        }
        
        
        cout<<endl;

     
    }

    //down

    for(int row=0;row<n;row++)
    {
        for(int col=0;col<row+1;col++ )
        {
            cout<<"# ";
        }

        for(int col=0;col<n-row;col++)
        {
            cout<<"  ";
        }
        for(int col=0;col<(n-1)-row;col++)
        {
            cout<<"  ";
        }

        for(int col=0;col<row+1;col++)
        {
            cout<<"# ";
        }

        cout<<endl;
    }

    

    return 0;
}