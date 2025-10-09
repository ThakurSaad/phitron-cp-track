#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,
            idxOfFirstOne = 0,
            idxOfLastOne = 0,
            zeroInBetween = 0;
        cin >> n;
        string s;
        cin >> s;

        bool isIdxOfFirstOneTaken = false;

        for (int i = 0; i <= s.length(); i++)
        {
            if (!isIdxOfFirstOneTaken && s[i] == '1')
            {
                idxOfFirstOne = i;
                idxOfLastOne = i;
                isIdxOfFirstOneTaken = true;
            }
            else if (s[i] == '1')
            {
                idxOfLastOne = i;
            }
        }

        if (!idxOfFirstOne && !idxOfLastOne)
        {
            cout << 0 << "\n";
            continue;
        }

        for (int i = idxOfFirstOne; i < idxOfLastOne; i++)
            if (s[i] == '0')
                zeroInBetween++;

        cout << zeroInBetween << "\n";
    }

    return 0;
}