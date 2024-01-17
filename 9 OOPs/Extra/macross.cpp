#include <iostream>
using namespace std;
#define PI 3.14 // this is macross it's good for making repeated task little easy
float circlearea(int num)
{
    float final = PI * num * num;
    return final;
}
int main()
{
    float num;
    cout << "Enter your radius of circle :";
    cin >> num;
    circlearea(num);
    cout << "Area of circle is : " << circlearea(num);
    return 0;
}   