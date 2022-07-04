//#include <iostream>
//#include <tuple>
//#include <queue>
//
//using namespace std;
//
//int field[100][100][100];
//int dist[100][100][100];
//bool isvisit[100][100][100];
//int xdis[6] = {1,0,-1,0,0,0};
//int ydis[6] = {0,1,0,-1,0,0};
//int zdis[6] = {0,0,0,0,1,-1};
//queue<tuple<int,int,int>> q;
//int m,n,h;
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> m >> n >> h;
//
//    for(int i = 0;i<h;i++)
//    {
//        for(int j = 0;j<n;j++)
//        {
//            for(int k = 0;k<m;k++)
//            {
//                cin >> field[i][j][k];
//                if(field[i][j][k] == 1)
//                {
//                    q.push({i,j,k});
//                    isvisit[i][j][k] = true;
//                }
//            }
//        }
//    }
//    while(!q.empty())
//    {
//        tuple<int,int,int> t = q.front(); q.pop();
//        for(int i =0;i<6;i++)
//        {
//            int xcur = get<1>(t) + xdis[i];
//            int ycur = get<2>(t) + ydis[i];
//            int zcur = get<0>(t) + zdis[i];
//            if(xcur<0||xcur>=n||ycur<0||ycur>=m||zcur<0||zcur>=h) continue;
//            if(field[zcur][xcur][ycur] != 0 || isvisit[zcur][xcur][ycur])continue;
//            q.push({zcur,xcur,ycur});
//            dist[zcur][xcur][ycur] = dist[get<0>(t)][get<1>(t)][get<2>(t)] + 1;
//            isvisit[zcur][xcur][ycur] = true;
//        }
//    }
//    int maxd = 0;
//    for(int i =0;i<h;i++)
//    {
//        for(int j = 0;j<n;j++)
//        {
//            for(int k=0;k<m;k++)
//            {
//                if(field[i][j][k] == 0 && isvisit[i][j][k] == false)
//                {
//                    cout << -1;
//                    return 0;
//                }
//                maxd = max(dist[i][j][k],maxd);
//            }
//        }
//    }
//    cout << maxd;
//    return 0;
//
//}
