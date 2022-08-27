//#include <iostream>
//#include <vector>
//using namespace std;
//
//int field1[15][15];
//int field2[15][15];
//int n,m;
//int ans;
//int xdir[4] = {1,0,-1,0};
//int ydir[4] = {0,1,0,-1};
//
//vector<pair<int,int>> camera;
//
//void update(int xcur,int ycur,int dir)
//{
//    dir %= 4;
//    while(1)
//    {
//        xcur += xdir[dir];
//        ycur += ydir[dir];
//        if(xcur<0||xcur>=n||ycur<0||ycur>=m||field2[xcur][ycur]==6)return;
//        if(field2[xcur][ycur] != 0) continue;
//        field2[xcur][ycur] = 7;
//    }
//}
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m;
//    for(int i =0;i<n;i++)
//    {
//        for(int j =0;j<m;j++)
//        {
//            cin >> field1[i][j];
//            if(field1[i][j] >= 1 && field1[i][j] <=5)
//                camera.push_back({i,j});
//            if(field1[i][j] == 0)
//                ans++;
//        }
//    }
//    for(int i = 0;i<(1<<2*camera.size());i++)
//    {
//        for(int x = 0;x<n;x++)
//        {
//            for(int y = 0;y<m;y++)
//            {
//                field2[x][y] = field1[x][y];
//            }
//        }
//        int temp = i;
//        for(int z = 0;z<camera.size();z++)
//        {
//            int dir = temp % 4;
//            temp /= 4;
//            int xcur = camera[z].first;
//            int ycur = camera[z].second;
//            if(field1[xcur][ycur] == 1)
//            {
//                update(xcur,ycur,dir);
//            }
//            
//            else if(field1[xcur][ycur] == 2)
//            {
//                update(xcur,ycur,dir);
//                update(xcur,ycur,dir+2);
//            }
//            
//            else if(field1[xcur][ycur] == 3)
//            {
//                update(xcur,ycur,dir);
//                update(xcur,ycur,dir+1);
//            }
//            
//            else if(field1[xcur][ycur] == 4)
//            {
//                update(xcur,ycur,dir);
//                update(xcur,ycur,dir+1);
//                update(xcur,ycur,dir+2);
//            }
//            else
//            {
//                update(xcur,ycur,dir);
//                update(xcur,ycur,dir+1);
//                update(xcur,ycur,dir+2);
//                update(xcur,ycur,dir+3);
//            }
//        }
//        int c=0;
//        for(int a=0;a<n;a++)
//        {
//            for(int b =0;b<m;b++)
//            {
//                if(field2[a][b] == 0)
//                    c++;
//            }
//        }
//        ans = min(c,ans);
//    }
//    cout << ans;
//}
