#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, r, d, u,
            UR, RD, DL, LU, // sides
            UD, LR;         // diagonals
        cin >> l >> r >> d >> u;

        UR = sqrt(pow((r - 0), 2) + pow((0 - u), 2));
        RD = sqrt(pow((r - 0), 2) + pow((0 - (-d)), 2));
        DL = sqrt(pow((0 - (-l)), 2) + pow((-d - 0), 2));
        LU = sqrt(pow((-l - 0), 2) + pow((0 - u), 2));
        UD = sqrt(pow((0 - 0), 2) + pow((u - (-d)), 2));
        LR = sqrt(pow((-l - r), 2) + pow((0 - 0), 2));

        if (UR == RD && RD == DL && DL == LU && UD == LR)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}