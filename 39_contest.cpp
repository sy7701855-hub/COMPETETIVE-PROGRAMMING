#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        stack<int> st;
        vector<int> v(n, 0);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                st.push(i);
            }
            else if (s[i] == '2')
            {
                if (!st.empty())
                {
                    int x = st.top();
                    st.pop();

                    v[x] = 1;
                }
                else
                {
                    v[i] = 1;
                }
            }
            else if (s[i] == '3')
            {
                v[i] = 1;
            }
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
                count++;
        }

        cout << count << endl;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
                cout << i + 1 << " ";
        }

        cout << endl;
    }

    return 0;
}