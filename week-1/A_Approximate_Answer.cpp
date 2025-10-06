#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, k;
    cin >> x >> y >> k;

    int result = abs(abs(x) - abs(y));

    if (result <= k)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}