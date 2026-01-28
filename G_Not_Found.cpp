#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> st(s.begin(), s.end());

    if (st.size() == 26)
    {
        cout << "None";
        return 0;
    };

    int arr[st.size()];
    int i = 0;

    for (char c : st)
    {
        arr[i++] = (int)c;
    }

    for (size_t j = 0; j < st.size(); j++)
    {
        if (arr[j + 1] == '\0')
            continue;

        int current = arr[j];
        int next = arr[j + 1];

        if (next != current + 1)
        {
            char ans = (char)current + 1;
            cout << ans;
            return 0;
        }
    }

    return 0;
}