/*B.cpp*/
#include <bits/stdc++.h>
using namespace std;

//入力
int n, W;
int weight[110], value[110];

int dp[110][10010];

int main(void)
{
  cin >> n >> W;
  for (int i = 0; i < n; i++)
    cin >> value[i] >> weight[i];
  for (int i = 0; i < n; i++)
  {
    for (int w = 0; w <= W; w++)
    {
      if (w >= weight[i])
        dp[i + 1][w] = max(dp[i][w - weight[i]] + value[i], dp[i][w]);
      else
        dp[i + 1][w] = dp[i][w];
    }
  }
  cout << dp[n][W] << endl;
}