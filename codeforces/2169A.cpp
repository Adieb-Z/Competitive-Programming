#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;

        int g = 0, l = 0;
        vector<int> marb(n);
        for (auto &i : marb)
        {
            cin >> i;
            if (i > a)
                g++;
            if (i < a)
                l++;
        }

        if (g > l)
            cout << a + 1 << '\n';
        else
            cout << a - 1 << '\n';
    }
}