//#include <iostream>
//using namespace std;
//
//int n;
//int dist[10000];
//int dp[10000][3];
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n;
//    for(int i = 1;i<=n;i++)
//        cin >> dist[i];
//    for(int i = 1;i<=n;i++)
//    {
//        dp[i][1] = max(dp[i-2][1],dp[i-2][2]) + dist[i];
//        dp[i][2] = dp[i-1][1] + dist[i];
//    }
//    cout << max(dp[n][1],dp[n][2]);
//    return 0;
//}
