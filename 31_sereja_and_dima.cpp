#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int i = 0;
    int j = n - 1;
    int sereja = 0;
    int dima = 0;
    bool flag = true;
    while (i <= j)
    {
        int val;
        if (nums[i] >= nums[j])
        {
            val = nums[i];
            i++;
        }
        else
        {
            val = nums[j];
            j--;
        }
        if (flag)
            sereja += val;
        else
            dima += val;

        flag = !flag;
    }

    cout << sereja << " " << dima;
    return 0;
}