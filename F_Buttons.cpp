// https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << a + b;
    }
    else
    {
        int big = max(a, b);

        cout << big + (big - 1);
    }

    return 0;
}