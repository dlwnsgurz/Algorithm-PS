//#include <iostream>
//#include <queue>
//#include <tuple>
//using namespace std;
//
//int n,m;
//int field[1002][1002];
//int dist[2][1002][1002];
//int ydis[4] = {0,1,0,-1};
//int xdis[4] = {1,0,-1,0};
//queue<tuple<int,int,int>> q;
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m;
//    for(int i = 1;i<=n;i++)
//    {
//        string str; cin >> str;
//        for(int j =1;j<=m;j++)
//        {
//            field[i][j] = str[j-1] - '0';
//            dist[0][i][j] = -1;
//            dist[1][i][j] = -1;
//        }
//    }
//    dist[0][1][1] = 1;
//    dist[1][1][1] = 1;
//    q.push({0,1,1});
//    
//    while(!q.empty())
//    {
//        int z,x,y;
//        tie(z,x,y) =  q.front();
//        if(x==n && y==m)
//        {
//            cout << dist[z][x][y];
//            return 0;
//        }
//        q.pop();
//        for(int i = 0;i<4;i++)
//        {
//            int curx = x + xdis[i];
//            int cury = y + ydis[i];
//            if(curx < 1||curx > n || cury < 1 || cury > m) continue;
//            if(field[curx][cury] == 0 && dist[z][curx][cury] < 1)
//            {
//                q.push({z,curx,cury});
//                dist[z][curx][cury] = dist[z][x][y] + 1;
//            }
//            if(!z&&field[curx][cury] == 1 &&dist[1][curx][cury] < 1)
//            {
//                q.push({1,curx,cury});
//                dist[1][curx][cury] = dist[0][x][y] + 1;
//            }
//        }
//    }
//    cout << -1;
//    return 0;
//}
//
