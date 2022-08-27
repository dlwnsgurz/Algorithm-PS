//#include <iostream>
//#include <queue>
//#include <utility>
//#include <algorithm>
//
//using namespace std;
//
//int field[1002][1002];
//bool isvisit[1002][1002];
//int dist[1002][1002];
//int xdis[4] = {1,0,-1,0};
//int ydis[4] = {0,1,0,-1};
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int a,b; cin >> a >> b;
//    queue<pair<int,int>> q;
//    for(int i = 0;i<b;i++)
//    {
//        for(int j = 0; j<a;j++)
//        {
//            cin >> field[i][j];
//            dist[i][j] = -1;
//            isvisit[i][j] = false;
//            if(field[i][j] == 1)
//            {
//                q.push({i,j});
//                isvisit[i][j] = true;
//                dist[i][j] = 0;
//            }
//        }
//    }
//    while(!q.empty())
//    {
//        pair<int,int> temp = q.front();
//        q.pop();
//        for(int i = 0;i<4;i++)
//        {
//            int curx = temp.first + xdis[i];
//            int cury = temp.second + ydis[i];
//            if(curx < 0||curx>=b||cury<0||cury>=a) continue;
//            if(field[curx][cury] == 1 || field[curx][cury] == -1 ||isvisit[curx][cury] == true)
//                continue;
//            dist[curx][cury] = dist[temp.first][temp.second] + 1;
//            q.push({curx,cury});
//            isvisit[curx][cury] = true;
//        }
//    }
//    int maxlen = -1;
//    for(int i = 0;i<b;i++)
//    {
//        for(int j = 0;j<a;j++)
//        {
//            if(isvisit[i][j] == false && field[i][j] == 0)
//            {
//                cout << -1;
//                return 0;
//            }
//            maxlen = max(maxlen,dist[i][j]);
//        }
//    }
//     cout << maxlen;
//    return 0;
//
//}
