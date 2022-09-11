#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int rows, coef = 1;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 0; i <= rows; i++)
    {
        int *space = new int;
        *space = (rows - i + 1) * 2;
        cout << setfill(' ') << setw(*space) << "";
        delete space;

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            cout << setfill(' ') << setw(4) << coef;
        }
        cout << "\n";
    }

    return 0;
}
