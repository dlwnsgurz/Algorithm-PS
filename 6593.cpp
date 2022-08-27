//#include <iostream>
//#include <queue>
//#include <tuple>
//#include <algorithm>
//using namespace std;
//
//int field[31][31][31];
//int dist[31][31][31];
//int xdir[6] = {1,0,-1,0,0,0,};
//int ydir[6] = {0,1,0,-1,0,0};
//int zdir[6] = {0,0,0,0,1,-1};
//int L,R,C;
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    while(1)
//    {
//        cin >> L >> R >> C;
//        if(L==0)
//            return 0;
//        queue<tuple<int,int,int>> q;
//        bool ispossible = false;
//        
//        
//        for(int i = 1;i<=L;i++)
//        {
//            for(int j = 1;j<=R;j++)
//            {
//                string str; cin >> str;
//                for(int k = 1;k<=C;k++)
//                {
//                    field[i][j][k] = str[k-1];
//                    dist[i][j][k] = -1;
//                    if(field[i][j][k] == 'S')
//                    {
//                        q.push({i,j,k});
//                        dist[i][j][k] = 0;
//                    }
//                }
//            }
//        }
//        while(!q.empty())
//        {
//            auto cur = q.front(); q.pop();
//            for(int i = 0;i<6;i++)
//            {
//                int curz = get<0>(cur) + zdir[i];
//                int curx = get<1>(cur) + xdir[i];
//                int cury = get<2>(cur) + ydir[i];
//                if(curz<1||curz>L||curx<1||curz>R||cury<1||cury>C) continue;
//                if(dist[curz][curx][cury] >= 0 || field[curz][curx][cury] == '#') continue;
//                q.push({curz,curx,cury});
//                dist[curz][curx][cury] = dist[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
//                if(field[curz][curx][cury] == 'E')
//                {
//                    cout << "Escaped in " << dist[curz][curx][cury] << " minute(s)." << '\n';
//                    ispossible = true;
//                    break;
//                }
//            }
//            if(ispossible)
//                break;
//        }
//        if(!ispossible)
//            cout << "Trapped!" << '\n';
//    }
//}
