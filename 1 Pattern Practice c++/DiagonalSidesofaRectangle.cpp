// # # # # # # # # # 
// # #           # # 
// #   #       #   # 
// #     #   #     # 
// #       #       # 
// #     #   #     # 
// #   #       #   # 
// # #           # # 
// # # # # # # # # # 
#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter a number : ";
    cin >> n;

    // upside

    for (int row = 0; row < n - 1; row++)
    {
        // pattern1
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || col == row)
            {
                cout << "# ";
            }
            else
            {
                cout << "  ";
            }
        }

        // pattern2

        for (int col = 0; col < (n - 1) - row; col++)
        {
            if (row == 0)
            {
                cout << "# ";
            }
            else
            {
                cout << "  ";
            }
        }

        // pattern3

        for (int col = 0; col < (n - 2) - row; col++)
        {
            if (row == 0)
            {
                cout << "# ";
            }
            else
            {
                cout << "  ";
            }
        }
        // pattern4

        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || col == row)
            {
                cout << "# ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }
    // mid line

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            cout << "# ";
        }
        else
        {
            cout << "  ";
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (i == n - 2)
        {
            cout << "# ";
        }
        else
        {
            cout << "  ";
        }
    }
    cout << endl;

    // Downpart

    for (int row = 0; row < n - 1; row++)
    {
        // pattern 1
        for (int col = 0; col < n - 1 - row; col++)
        {
            if (col == 0 || col == n - 1 - row - 1)
            {
                cout << "# ";
            }
            else
            {
                cout << "  ";
            }
        }

        // pattern 2

        for (int col = 0; col < row + 1; col++)
        {
            if (row == n - 2)
            {
                cout << "# ";
            }
            else
            {
                cout << "  ";
            }
        }

        // pattern 3

        for (int col = 0; col < row; col++)
        {
            if (row == n - 2)
            {
                cout << "# ";
            }
            else
            {
                cout << "  ";
            }
        }

        // pattern 3

        for (int col = 0; col < n - 1 - row; col++)
        {
            if (col == 0 || col == n - 1 - row - 1)
            {
                cout << "# ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}