#include <bits/stdc++.h>
using namespace std;

int mexFinder(int n, vector<int> &a)
{
    vector<bool> seen(n + 1, false);

    for (int val : a)
        if (val >= 0 && val <= n)
            seen[val] = true;

    for (int i = 0; i <= n; i++)
        if (!seen[i])
            return i;
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mex = mexFinder(n, a);

    if (mex == x)
    {
        cout << 0;
    }
    else if (x == 0)
    {
        cout << 1;
    }
    else
    {

        // count the numbers that is already present between arr mex and preferred mex(x)
        int existing = 0, start = 0, end = 0;

        sort(a.begin(), a.end());

        if (x > mex)
        {
            start = mex;
            end = x;
        }
        else
        {
            start = x;
            end = mex;
        }

        for (int i = start; i < end; i++)
        {
            // cout << a[i] << " ";
            if (a[i] > 0 && a[i] < x)
            {
                // cout << a[i] << " ";
                existing++;
            }
        }
        // cout << existing << " " << mex << " ";
        // int sum = 0;
        // for (int i = 0; i<=x; i++) {
        //     sum
        // }
        cout << abs((mex + existing) - x);
    }

    return 0;
}