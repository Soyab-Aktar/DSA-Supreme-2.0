#include<iostream>
using namespace std;
int getlength(char ch[],int size)
{
  int index=0;
  int lengthch=0;
  while(ch[index]!='\0')
    {
      index++;
      lengthch++;
    }
  return lengthch;
}

void revercech(char ch[],int length)
{
  int left=0;
  int right=length-1;
  while(left<=right)
    {
      swap(ch[left],ch[right]);
      left ++;
      right--;
    }
  cout<<"Reverse form is : "<<ch;
}

int main()
{
  char ch[100];
  int size=100;
  cout<<"Enter Your input : ";
  cin.getline(ch,100);

  int length=getlength(ch,size);
  revercech(ch,length);

  return 0;
}