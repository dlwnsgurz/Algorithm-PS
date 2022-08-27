//#include <iostream>
//#include <utility>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//char field[1000][1000];
//int fdistance[1000][1000];
//bool jisvisit[1000][1000];
//bool fisvisit[1000][1000];
//int jdistance[1000][1000];
//int xdis[4] = {1,0,-1,0};
//int ydis[4] = {0,1,0,-1};
//queue<pair<int,int>> q;
//queue<pair<int,int>> q2;
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int r,c; cin >> r >> c;
//    for(int i = 0;i<r;i++)
//    {
//        for(int j =0;j<c;j++)
//        {
//            cin >> field[i][j];
//            if(field[i][j] == 'F')
//            {
//                fisvisit[i][j] = true;
//                q.push({i,j});
//            }
//            if(field[i][j] == 'J')
//            {
//                jisvisit[i][j] = true;
//                q2.push({i,j});
//            }
//        }
//    }
//    while(!q.empty())
//    {
//        pair<int,int> cur = q.front(); q.pop();
//        for(int i = 0;i<4;i++)
//        {
//            int curx = cur.first + xdis[i];
//            int cury = cur.second + ydis[i];
//            if(curx< 0 || curx>=r || cury< 0 || cury >=c) continue;
//            if(fisvisit[curx][cury] || field[curx][cury] == '#') continue;
//            q.push({curx,cury});
//            fdistance[curx][cury] = fdistance[cur.first][cur.second] + 1;
//            fisvisit[curx][cury] = true;
//        }
//    }
//    while(!q2.empty())
//    {
//        pair<int,int> cur = q2.front(); q2.pop();
//        for(int i = 0;i<4;i++)
//        {
//            int curx = cur.first + xdis[i];
//            int cury = cur.second + ydis[i];
//            if(curx<0||curx>=r||cury<0||cury>=c) continue;
//            if(jisvisit[curx][cury] || field[curx][cury] != '.')continue;
//            if(jdistance[curx][cury] >= fdistance[curx][cury]) continue;
//            q2.push({curx,cury});
//            jisvisit[curx][cury] = true;
//            jdistance[curx][cury] = jdistance[cur.first][cur.second] + 1;
//        }
//    }
//  bool ispossible = false;
//  int ans = 999999999;
//    for(int i = 0;i<r;i++)
//    {
//        for(int j = 0;j<c;j++)
//        {
//            if(i==0||i==r-1||j==0||j==c-1)
//            {
//               if(field[i][j] == '.' && jisvisit[i][j])
//               {
//                   ans = min(jdistance[i][j],ans);
//                   ispossible =true;
//               }
//            }
//        }
//    }
//    if(ispossible)
//        cout << ans+1;
//    else
//        cout << "IMPOSSIBLE";
//    return 0;
//}
