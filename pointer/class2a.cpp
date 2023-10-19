#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    char ch[10] = "Soyab";
    // pointer on entaire array of an integer
    int(*ptr)[5] = &arr;
    // pointer on a charector array
    char(*cptr)[10] = &ch;

    cout << "Address of entaire array : " << ptr << endl;
    cout << "Address of entaire charector array : " << cptr << endl;

    return 0;
}