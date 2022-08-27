//#include <iostream>
//using namespace std;
//int field[505][505];
//int dp[505][505];
//int n;
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n;
//    for(int i = 1;i<=n;i++)
//    {
//        for(int j = 1;j<=i;j++)
//        {
//            cin >> field[i][j];
//        }
//    }
//    for(int i = 1;i<=n;i++)
//    {
//        for(int j = 1;j<=i;j++)
//        {
//            dp[i][j] = max(dp[i-1][j-1] + field[i][j], dp[i-1][j] + field[i][j]);
//        }
//    }
//        cout << *max_element(dp[n] + 1,dp[n] + n + 1);
//}
