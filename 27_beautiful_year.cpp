#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin >> y;
    while (true)
    {
        y++;
        string s = to_string(y);
        set<char> st;
        // we can aslo use set<char>st(s.begin(),s.end()) it works same set for loop
        for (char c : s)
        {
            st.insert(c);
        }
        if (st.size() == 4)
        {
            cout << y;
            break;
        }
    }
    return 0;
}