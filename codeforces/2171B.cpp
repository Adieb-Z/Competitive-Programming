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
        int a;
        cin >> a;
        vector<int> angka(a);
        for (int i = 0; i < a; i++)
        {
            cin >> angka[i];
            if (i != 0 && i != a - 1 && angka[i] == -1)
            {
                angka[i] = 0;
            }
        }

        if (angka[0] != -1 && angka[a - 1] != -1)
        {
            cout << abs(angka[a - 1] - angka[0]) << '\n';
            for (const auto &i : angka)
                cout << i << ' ';
            cout << '\n';
        }
        else if (angka[0] == -1 && angka[a - 1] == -1)
        {
            angka[0] = 0;
            angka[a - 1] = 0;
            cout << 0 << '\n';
            for (const auto &i : angka)
                cout << i << ' ';
            cout << '\n';
        }
        else
        {
            if (angka[0] == -1)
            {
                angka[0] = angka[a - 1];
            }
            else
            {
                angka[a - 1] = angka[0];
            }

            cout << 0 << '\n';
            for (const auto &i : angka)
                cout << i << ' ';
            cout << '\n';
        }
    }
}