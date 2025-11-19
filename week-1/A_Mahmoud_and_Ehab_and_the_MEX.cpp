#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    vector<int> a(n);
    cin >> n >> x;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<bool> seen(n + 1, false);

    for (int val : a)
        if (val <= n)
            seen[val] = true;

    for (int i = 0; i < n; i++)
    {
        // cout << a[i] << " ";
        if (seen[i])
            cout << 1;
        // cout << seen[i] << " ";
    }

    return 0;
}