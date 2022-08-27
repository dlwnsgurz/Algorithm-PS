//#include <bits/stdc++.h>
//using namespace std;
//
//int field[25][25];
//bool isvisit[25][25];
//int xdis[4] = {1,0,-1,0};
//int ydis[4] = {0,1,0,-1};
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int t; cin >> t;
//    for(int i = 0;i<t;i++)
//    {
//        string s;
//        cin >> s;
//        for(int j = 0;j<t;j++)
//        {
//            field[i][j] = s[j] -'0';
//        }
//    }
//    queue<pair<int,int>> q;
//    deque<int> d;
//    int ans = 0;
//    int sum = 1;
//    for(int i = 0;i<t;i++)
//    {
//        for(int j =0;j<t;j++)
//        {
//            if(field[i][j] == 1 && isvisit[i][j] == false)
//            {
//                q.push({i,j});
//                isvisit[i][j] = true;
//                ans++;
//                while(!q.empty())
//                {
//                    pair<int,int> cur = q.front(); q.pop();
//                    for(int i = 0;i<4;i++)
//                    {
//                        int curx = cur.first + xdis[i];
//                        int cury = cur.second + ydis[i];
//                        if(curx<0||curx>=t||cury<0||cury>=t) continue;
//                        if(isvisit[curx][cury]||field[curx][cury]==0) continue;
//                        q.push({curx,cury});
//                        isvisit[curx][cury] = true;
//                        sum++;
//                    }
//                }
//                d.push_back(sum);
//                sum = 1;
//             }
//         }
//    }
//    cout << ans << '\n';
//    sort(d.begin(),d.end());
//    while(!d.empty())
//    {
//        cout << d.front() << '\n';
//        d.pop_front();
//    }
//}
