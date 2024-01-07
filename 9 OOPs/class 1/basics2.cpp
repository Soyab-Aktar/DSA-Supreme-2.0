#include<iostream>
#include<vector>
#include<string>
using namespace std;
class student
{
};
class home
{
    int rooms;
};
class game
{
    int gta;
    int num;
    bool tick;
};
int main()
{
    cout<<sizeof(student)<<endl; //in empty class its size is always 1. why = compailer need to remember that a class have exists in this progeame
    cout<<sizeof(home)<<endl;// when it is not emptycompiler remove 1 byte and add variables size
    cout<<sizeof(game)<<endl; // 12 because for compile did padding
}