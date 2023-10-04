#include<iostream>
using namespace std;
//using for loop
int lenfor(char ch[],int size)
{
    int length =0;

    for(int i=0;i<size;i++)
    {
        if(ch[i]=='\0')
        {
            break;
        }
        else
        {
            length++;
        }

    }
    return length;
}
//using while loop
int lenwhile(char ch[],int size)
{
    int sizeofch =0;
    int i=0;
    int length=0;
    while(ch[i]!='\0')
    {
        sizeofch++;
        i++;
    }
    return sizeofch;
}
int main()
{
    char ch[100];
    int size =100;

    cout<<"Enter your input :";
    cin.getline(ch,100);

    int lengthChfor=lenfor(ch,size);
    int lengthChwhile=lenwhile(ch,size);

    cout<<"Length of Charector is : "<<lengthChfor;
    cout<<"Length of Charector is : "<<lengthChwhile;

    return 0;
}