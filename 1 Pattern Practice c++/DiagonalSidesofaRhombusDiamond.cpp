//         # 
//       # # # 
//     #   #   # 
//   #     #     # 
// # # # # # # # # # 
//   #     #     # 
//     #   #   # 
//       # # # 
//         # 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-1-row;col++)
        {
            cout<<"  ";
        }

        for(int col=0;col<row+1;col++)
        {
            if(col==0 || row==n-1 || col == row+1-1)
            {
                cout<<"# ";
            }
            else
            {
                cout<< "  ";
            }
        }

        for(int col=0;col<row;col++)
        {
            if(row==1 || row==n-1 || col == row-1)
            {
                cout<<"# ";
            }
            else
            {
                cout<< "  ";
            }
        }

        cout<<endl;
    }

    for(int row=0;row<n-1;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<"  ";
        }

        for(int col=0;col<n-1-row;col++)
        {
            if(col==0 || col == (n-1)-row-1)
            {
                cout<<"# ";
            }
            else
            {
                cout<< "  ";
            }
        }

        for(int col=0;col<n-2-row;col++)
        {
            if(col==(n-2)-row-1)
            {
                cout<<"# ";
            }
            else
            {
                cout<<"  ";
            }
        }

        cout<<endl;
    }

    return 0;
}