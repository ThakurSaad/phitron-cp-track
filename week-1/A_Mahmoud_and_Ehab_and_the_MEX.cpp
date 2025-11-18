#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    set<int> s;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (int val : s)
    {
        cout << val << " ";
    }

    return 0;
}