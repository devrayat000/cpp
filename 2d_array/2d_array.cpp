#include <iostream>

using namespace std;

int main()
{
    int matrix[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };


    for (int i = 0; i < size(matrix); i++)
    {
        for (int j = 0; j < size(matrix[i]); j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
        
    }

    return 0;
}
