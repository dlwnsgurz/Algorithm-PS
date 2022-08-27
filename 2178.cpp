//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <utility>
//using namespace std;
//
//const int n= 100,m=100;
//int dist[n][m];
//int field[n][m];
//int xdir[4] = {1,0,-1,0};
//int ydir[4] = {0,1,0,-1};
//
//int main(void)
//{
//   int a,b; cin >> a >> b;
//   for(int i = 0;i<a;i++)
//   {
//       string str; cin >> str;
//       for(int j=0;j<b;j++)
//       {
//           dist[i][j] = -1;
//           field[i][j] = str[j] - '0';
//       }
//   }
//   queue<pair<int,int>> q;
//   dist[0][0] = 0; q.push({0,0});
//   while(!q.empty())
//   {
//       pair<int,int> p = q.front(); q.pop();
//       for(int i =0;i<4;i++)
//       {
//           int xcur = p.first + xdir[i];
//           int ycur = p.second + ydir[i];
//           if(xcur<0||xcur>=a||ycur<0||ycur>=b) continue;
//           if(dist[xcur][ycur] != -1 || field[xcur][ycur] == 0) continue;
//           q.push({xcur,ycur});
//           dist[xcur][ycur] = dist[p.first][p.second] + 1;
//       }
//   }
//   cout << dist[a-1][b-1] + 1 << '\n';
//   return 0;
//
//
//}
