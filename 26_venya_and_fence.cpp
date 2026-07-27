#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;

    int ans = 0;
    while (n--)
    {
        int t;
        cin >> t;

        if (t <= h)
        {
            ans += 1;
        }
        else
        {
            ans += 2;
        }
    }
    cout << ans;
    return 0;
}