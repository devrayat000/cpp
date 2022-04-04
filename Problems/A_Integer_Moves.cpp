#include <iostream>
#include <cmath>

using namespace std;

typedef long long int ll;

float distance(int x1, int y1, int x0 = 0, int y0 = 0)
{
    return sqrt((pow((x1 - x0), 2) + pow((y1 - y0), 2)));
}

bool isInt(float num)
{
    return num == round(num);
}

int main()
{
    ll t;

    cin >> t;

    while (t--)
    {
        ll dx, dy;
        cin >> dx >> dy;
        int z = sqrt(dx * dx + dy * dy);

        if (z == 0)
        {
            cout << 0;
        }
        else
        {
            int result = z * z == dx * dx + dy * dy ? 1 : 2;
            cout << result;
        }

        cout << endl;
    }
    return 0;
}
