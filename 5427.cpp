//#include <iostream>
//#include <queue>
//#include <utility>
//#include <algorithm>
//using namespace std;
//
//char field[1000][1000];
//int fdis[1000][1000];
//int sdis[1000][1000];
//int t,m,n;
//int xdis[4] = {1,0,-1,0};
//int ydis[4] = {0,1,0,-1};
//int main(void)
//{
//    cin >> t;
//    while(t--)
//    {
//        bool ispossible = false;
//        queue<pair<int,int>> f;
//        queue<pair<int,int>> s;
//        cin >> m >> n;
//        for(int i = 0;i<n;i++)
//        {
//            fill(fdis[i],fdis[i]+m,-1);
//            fill(sdis[i],sdis[i]+m,-1);
//        }
//        for(int i =0;i<n;i++)
//        {
//            for(int j =0;j<m;j++)
//            {
//                cin >> field[i][j];
//                if(field[i][j] == '@')
//                {
//                    sdis[i][j] = 0;
//                    s.push({i,j});
//                }
//                else if(field[i][j] == '*')
//                {
//                    fdis[i][j] = 0;
//                    f.push({i,j});
//                }
//            }
//        }
//        while(!f.empty())
//        {
//            pair<int,int> cur = f.front(); f.pop();
//            for(int i = 0;i<4;i++)
//            {
//                int curx = cur.first + xdis[i];
//                int cury = cur.second + ydis[i];
//                if(curx<0||curx>=n||cury<0||cury>=m) continue;
//                if(fdis[curx][cury] >= 0 || field[curx][cury] == '#') continue;
//                f.push({curx,cury});
//                fdis[curx][cury] = fdis[cur.first][cur.second] + 1;
//            }
//        }
//        while(!s.empty())
//        {
//            pair<int,int> cur = s.front(); s.pop();
//            for(int i = 0;i<4;i++)
//            {
//                int curx = cur.first + xdis[i];
//                int cury = cur.second + ydis[i];
//                if(curx<0||curx>=n||cury<0||cury>=m)
//                {
//                    cout << sdis[cur.first][cur.second] + 1 << '\n';
//                    while(!s.empty())
//                        s.pop();
//                    ispossible = true;
//                    break;
//                }
//                if(sdis[curx][cury] >= 0 || field[curx][cury] != '.') continue;
//                if((sdis[cur.first][cur.second] + 1 >= fdis[curx][cury]) && fdis[curx][cury] >=0) continue;
//                    sdis[curx][cury] = sdis[cur.first][cur.second] + 1;
//                    s.push({curx,cury});
//            }
//        }
//        if(!ispossible)
//        cout << "IMPOSSIBLE" << '\n';
//    }
//        
//}
//
