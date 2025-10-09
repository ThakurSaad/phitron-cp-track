#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b, min;
        cin >> n >> a >> b;
        min = 0;
        bool isFirstIteration = false;

        while (n--)
        {
            int x, y, dist;
            cin >> x >> y;

            dist = abs(x - a) + abs(y - b);

            if (!isFirstIteration)
            {

                min = dist;
                isFirstIteration = true;
            }

            if (min > dist)
                min = dist;
        }
        
        cout << min << "\n";
    }

    return 0;
}