#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(3);
    for (auto &q : a)
        cin >> q;

    int maxx = *max_element(a.begin(), a.end()), minn = *min_element(a.begin(), a.end());
    int diff = maxx - minn;
    sort(a.begin(), a.end());
    if (diff < 10)
    {
        cout << "final " << a[1];
    }
    else
    {
        cout << "check again";
    }
}