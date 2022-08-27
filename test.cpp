//#include <iostream>
//using namespace std;
//
//long long dp[91][2];
//int n;
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n;
//    dp[1][0] = 2;
//    dp[2][0] = 3;
//    dp[1][1] = 1;
//    dp[2][1] = 1;
//    for(int i = 3;i<=n;i++)
//    {
//        dp[i][0] = dp[i-1][0] + dp[i-2][0];
//        dp[i][1] = dp[i-2][0];
//    }
//    cout << dp[n][1];
//}
