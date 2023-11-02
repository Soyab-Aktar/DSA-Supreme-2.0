//         1 
//       2 3 2 
//     3 4 5 4 3 
//   4 5 6 7 6 5 4 
// 5 6 7 8 9 8 7 6 5 

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int row = 1; row <= num; row++)
    {
        // Print spaces
        for (int space = 1; space <= num - row; space++)
        {
            cout << "  ";
        }

        // Print numbers in increasing order
        for (int col = row; col < 2 * row; col++)
        {
            cout << col << " ";
        }

        // Print numbers in decreasing order
        for (int col = 2 * row - 2; col >= row; col--)
        {
            cout << col << " ";
        }

        cout << endl;
    }
    return 0;
}
