#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, R;
        cin >> x >> y >> R;
        bool found = false;
        for (int i = -R; i <= R && !found; i++)
        {
            for (int j = -R; j <= R; j++)
            {
                if ((i) * (i) + (j) * (j) == R * R)
                {
                    cout << x + i << " " << y + j << endl;
                    found = true;
                    break;
                }
            }
        }
    }
    return 0;
}