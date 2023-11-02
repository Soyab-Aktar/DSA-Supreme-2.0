// # # # # # # # 
// #           # 
// #           # 
// #           # 
// # # # # # # # 
#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<< "Enter a number :";
    cin>>n;

    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n+2;col++)
        {
            if(col==0||col==n+2-1||row==0||row==n-1)
            {
                cout<< "# ";
            }
            else
            {
                cout<< "  ";
            }

        }
        cout<<endl;
    }
    return 0;
}