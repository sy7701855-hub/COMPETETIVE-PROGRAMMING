#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long x, y, z;
        cin >> x >> y >> z;

        vector<long long> v = {x, y, z};
        sort(v.begin(), v.end());
        x = v[0];
        y = v[1];
        z = v[2];

        if (z > x + y)
        {
            cout << y << endl;
        }
        else
        {
            cout << z - x << endl;
        }
    }
    return 0;
}