//#include <iostream>
//#include <queue>
//#include <utility>
//using namespace std;
//
//int field[51][51];
//int xdis[4] = {1,0,-1,0};
//int ydis[4] = {0,1,0,-1};
//bool isvisit[51][51];
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int t; cin >> t;
//    while(t--)
//    {
//        int ans = 0;
//        queue<pair<int,int>> q;
//        int m,n,k; cin >> m >> n >> k;
//        for(int i = 0;i<m;i++)
//        {
//            for(int j =0;j<n;j++)
//            {
//                field[i][j] = 0;
//                isvisit[i][j] = false;
//            }
//        }
//        int i,j;
//        while(k--)
//        {
//            cin >> i >> j;
//            field[i][j] = 1;
//        }
//            for(int a = 0;a<m;a++)
//            {
//                for(int b = 0;b<n;b++)
//                {
//                    if(isvisit[a][b] == true || field[a][b] == 0) continue;
//                    ans++;
//                    isvisit[a][b] = true;
//                    q.push({a,b});
//                    while(!q.empty())
//                    {
//                        pair<int,int> p = q.front(); q.pop();
//                        for(int i = 0;i<4;i++)
//                        {
//                            int curx = p.first + xdis[i];
//                            int cury = p.second + ydis[i];
//                            if(curx < 0 || curx >= m || cury <0 || cury >= n) continue;
//                            if(isvisit[curx][cury] || field[curx][cury] == 0) continue;
//                            q.push({curx,cury});
//                            isvisit[curx][cury] = true;
//                        }
//                    }
//                 }
//              }
//        cout << ans << '\n';
//    }
//    return 0;
//}
//
//
//
//
//
//
//
