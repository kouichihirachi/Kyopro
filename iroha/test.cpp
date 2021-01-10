#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)
#define Rep(i, a, b) for (int i = 0; i < b; i++)
#define REP(i, a, b) for (int i = 0; i <= b; i++)
#define rev(i, n) for (int i = n - 1; i >= 0; i--)
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define pi pair<int, int>
#define vp vector<pair<int, int>>
#define mp make_pair
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define MEMSET(a) memset(a, 0, sizeof(a))
#define inf (1ll << 60)
#define Yes(f) cout << (f ? "Yes" : "No") << endl //fが真の場合Yesを出力、偽の場合Noを出力
#define yes(f) cout << (f ? "yes" : "no") << endl
#define YES(f) cout << (f ? "YES" : "NO") << endl
#define SORT(v) sort(all(v))
#define RSORT(v) sort(all(v), greater<int>())

using namespace std;

const int mod = 1e9 + 7;

signed main()
{
    int n;
    cin >> n;
    vi h(n);
    vi size(n);
    rep(i, n)
    {
        cin >> h[i];
        size[i] = h[i];
    }

    sort(h.begin(), h.end());

    int old = h[0];
    for (int i = 1; i < n; i++)
    {
        if (h[i] == old)
            h[i] = -1;
        if (h[i] != -1)
            old = h[i];
    }

    int f = 1;
    unordered_map<int, int> H;
    for (int i = 0; i < n; i++)
    {
        if (h[i] != -1)
        {
            H[h[i]] = f;
            f++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << H[size[i]] << endl;
    }
}