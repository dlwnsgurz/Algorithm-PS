//#include <iostream>
//using namespace std;
//
//int n,m;
//int arr[100004];
//int dp[100004];
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m;
//    for(int i = 1;i<=n;i++)
//    {
//        cin >> arr[i];
//        dp[i] = dp[i-1] + arr[i];
//    }
//    while(m--)
//    {
//        int i,j;
//        cin >> i >> j;
//        cout << dp[j] - dp[i-1] << '\n';
//    }
//}
