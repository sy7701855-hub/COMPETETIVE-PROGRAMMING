#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int req = 240 - k;
    int low = 0;
    int high = n;
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int time = 5 * mid * (mid + 1) / 2;

        if (time <= req)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans;
    return 0;
}