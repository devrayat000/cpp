#include <iostream>

using namespace std;

typedef long long int ll;

int main()
{
    ll t;

    cin >> t;

    while (t--)
    {
        ll a, b, ans;
        cin >> a >> b;

        if (a == 0)
        {
            ans = 1;
        }
        else
        {
            ans = a + (b * 2) + 1;
        }
        cout << ans << endl;
        
    }
    



    return 0;
}
