//#include <stack>
//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <deque>
//
//using namespace std;
//
//int field[100][100];
//bool isvisit[100][100];
//int xdis[4] = {1,0,-1,0};
//int ydis[4] = {0,1,0,-1};
//int x,y, xx,yy;
//int m,n,k;
//deque<int> d;
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> m >> n >> k;
//    while(k--)
//    {
//        cin >> x >> y;
//        cin >> xx >> yy;
//        for(int i = y;i<yy;i++)
//        {
//            for(int j = x;j<xx;j++)
//            {
//                field[i][j] = 1;
//            }
//        }
//    }
//    queue<pair<int,int>> q;
//    int ans = 0;
//    int sum = 1;
//    for(int i = 0;i<m;i++)
//    {
//        for(int j = 0;j<n;j++)
//        {
//            if(isvisit[i][j] == false && field[i][j] == 0)
//            {
//                ans++;
//                q.push({i,j});
//                isvisit[i][j] = true;
//                while(!q.empty())
//                {
//                    pair<int,int> cur = q.front(); q.pop();
//                    for(int f = 0;f<4;f++)
//                    {
//                        int cury = cur.first + ydis[f];
//                        int curx = cur.second + xdis[f];
//                        if(curx<0||curx>=n||cury<0||cury>=m) continue;
//                        if(field[cury][curx] == 1 || isvisit[cury][curx]) continue;
//                        q.push({cury,curx});
//                        isvisit[cury][curx] = true;
//                        sum++;
//                    }
//                }
//                d.push_back(sum);
//                sum = 1;
//            }
//        }
//    }
//    cout << ans << '\n';
//    sort(d.begin(),d.end());
//    while(!d.empty())
//    {
//        cout << d.front() << ' ';
//        d.pop_front();
//    }
//    
//    
//    
//}
//
