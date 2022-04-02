#include<iostream>

using namespace std;

int powx(int base, int power) {
    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int _test = powx(2, 3);

    cout << "2 ^ 3 = " << _test;
    return 0;
}
