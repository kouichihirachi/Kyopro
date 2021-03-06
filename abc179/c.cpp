#include <bits/stdc++.h>
using namespace std;
int count(int a)
{
    int ans = 1;
    for (int i = 2; i <= sqrt(a); i++)
    {
        int cnt = 0;
        while (a % i == 0)
        {
            cnt++;
            a /= i;
        }
        ans *= (cnt + 1);
        if (a == 1)
            break;
    }
    if (a != 1)
        ans *= 2;
    return ans;
}
int main(void)
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        ans += count(i);
    }
    cout << ans << endl;
    return 0;
}