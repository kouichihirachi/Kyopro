#include <algorithm>
#include <bitset>
#include <cmath>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repk(i, k, n) for (int i = k; i < n; i++)
#define MOD 1000000007
#define INF INT32_MAX / 2
#define PI 3.14159265358979323

template <class T>
inline bool chmin(T &a, T b)
{
  if (a > b)
  {
    a = b;
    return true;
  }
  return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
  if (a < b)
  {
    a = b;
    return true;
  }
  return false;
}
template <class T>
T GCD(T a, T b)
{
  if (b == 0)
    return a;
  else
    return GCD(b, a % b);
}
template <class T>
inline T LCM(T a, T b)
{
  return (a * b) / GCD(a, b);
}

using namespace std;
//#inculude <bits/stdc++.h>
#define int long long

signed main()
{
  double x, y, r;
  cin >> x >> y >> r;
  long long ans = 0;
  for (long long i = ceil(x - r); i <= floor(x + r); i++)
  {
    for (long long j = ceil(y - r); j <= floor(y + r); j++)
    {
      if (pow(i - x, 2.0) + pow(j - y, 2.0) <= r * r)
        ans++;
    }
  }
  cout << ans << endl;
  return 0;
  return 0;
}