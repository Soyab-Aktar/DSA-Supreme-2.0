#include <iostream>
using namespace std;
int main()
{
    char ch[10] = "Soyab";

    // charector of a pointer

    char *cptr = ch; // or use &ch;

    // pointer on a charector

    char(*cptr2)[10] = &ch;

    // output of charector of a pointer

    cout << ch << endl;
    cout << &ch << endl;
    cout << *(ch + 3) << endl;
    cout << cptr << endl;
    cout << *(cptr + 3) << endl;
    cout << cptr + 2 << endl;
    cout << *cptr << endl;
    cout << cptr + 2 << endl
         << endl;

    // output of pointer on array

    cout << cptr2;
}