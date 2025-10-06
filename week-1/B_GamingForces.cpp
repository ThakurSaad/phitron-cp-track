#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,
            numOfOnes = 0,
            numOfAtk = 0;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr[i] = val;

            if (val == 1)
                numOfOnes++;
        }

        if (numOfOnes == 0)
            numOfAtk = n;
        else if (numOfOnes % 2 != 0)
            numOfAtk = (numOfOnes / 2) + (n - numOfOnes) + 1;
        else
            numOfAtk = (numOfOnes / 2) + (n - numOfOnes);

        cout << numOfAtk << "\n";
    }

    return 0;
}