#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int present = 0;
    int ans = INT_MIN;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        present -= a;
        present += b;

        ans = max(ans, present);
    }
    cout << ans;
    return 0;
}