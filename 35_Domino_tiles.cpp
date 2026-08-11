#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        long long ans = 1;

        // Check even positions
        int cnt = 0;

        for (int first = 0; first <= 1; first++)
        {
            bool ok = true;

            for (int i = 0; i < n; i += 2)
            {
                int need = first ^ (i / 2) % 2;

                if (s[i] != '?' && s[i] - '0' != need)
                    ok = false;
            }

            if (ok)
                cnt++;
        }

        ans *= cnt;

        // Check odd positions
        cnt = 0;

        for (int first = 0; first <= 1; first++)
        {
            bool ok = true;

            for (int i = 1; i < n; i += 2)
            {
                int need = first ^ ((i - 1) / 2) % 2;

                if (s[i] != '?' && s[i] - '0' != need)
                    ok = false;
            }

            if (ok)
                cnt++;
        }

        ans *= cnt;

        cout << ans % MOD << '\n';
    }
}