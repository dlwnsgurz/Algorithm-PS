//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//int bfs(int);
//int field[100][100];
//bool isvisit[100][100];
//int xdir[4] = {1,0,-1,0};
//int ydir[4] = {0,1,0,-1};
//int n;
//int maxans;
//int maxh;
//int minh = 1;
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n;
//    for(int i = 0;i<n;i++)
//    {
//        for(int j =0;j<n;j++)
//        {
//            cin >> field[i][j];
//            maxh = max(field[i][j], maxh);
//            minh = min(field[i][j],minh);
//        }
//    }
//    for(int i = 0;i<=maxh+1;i++)
//    {
//        maxans = max(bfs(i),maxans);
//    }
//    cout << maxans;
//}
//int bfs(int h)
//{
//    queue<pair<int,int>> q;
//
//    for(int i = 0;i<n;i++)
//    fill(isvisit[i],isvisit[i]+n,false);
//    int ans = 0;
//    for(int i = 0;i<n;i++)
//    {
//        for(int j = 0;j<n;j++)
//        {
//            if(isvisit[i][j] == false && field[i][j] > h)
//            {
//                ans++;
//                q.push({i,j});
//                isvisit[i][j] = true;
//                while(!q.empty())
//                {
//                    pair<int,int> p = q.front(); q.pop();
//                    for(int a = 0 ; a<4; a++)
//                    {
//                        int curx = p.first + xdir[a];
//                        int cury = p.second + ydir[a];
//                        if(curx < 0 || curx >=n|| cury<0 || cury >=n) continue;
//                        if(field[curx][cury] <= h || isvisit[curx][cury]) continue;
//                        q.push({curx,cury});
//                        isvisit[curx][cury] = true;
//                    }
//                }
//            }
//        }
//    }
//    return ans;
//}
//
//
