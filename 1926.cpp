//#include <iostream>
//#include <utility>
//#include <queue>
//using namespace std;
//
//const int n = 500;
//const int m = 500;
//bool isvisit[n][m] = {0};
//int field[n][m] = {0};
//int xdiv[4] = {1,0,-1,0};
//int ydiv[4] = {0,1,0,-1};
//queue<pair<int,int>> q;
//int bfs(int,int);
//int main(void)
//{
//    int sum = 0;
//    int number = 0;
//    int a,b; cin >> a >> b;
//    for(int i = 0; i<a;i++)
//    {
//        for(int j=0;j<b;j++)
//        {
//            int x; cin >> x;
//            field[i][j] = x;
//        }
//    }
//    for(int i = 0;i<a;i++)
//    {
//        for(int j =0; j<b;j++)
//        {
//            if(isvisit[i][j] == false && field[i][j] == 1)
//            {
//                int temp = bfs(i,j);
//                if(temp > number)
//                    number = temp;
//                sum += 1;
//            }
//        }
//    }
//    cout << sum << '\n' << number;
//}
//int bfs(int a,int b)
//{
//    if(isvisit[a][b] == false || field[a][b] == 1)
//    {
//        isvisit[a][b] = true;
//        q.push({a,b});
//    }
//    else
//        return 0;
//    int ans = 0;
//    while(!q.empty())
//    {
//        pair<int,int> p = q.front(); q.pop();ans++;
//        for(int i = 0;i<4;i++)
//        {
//            int curX = p.first + xdiv[i];
//            int curY = p.second + ydiv[i];
//            if(curX < 0 || curX >=n|| curY < 0 || curY >=n) continue;
//            if(isvisit[curX][curY] || field[curX][curY] != 1) continue;
//            q.push({curX,curY});
//            isvisit[curX][curY] = true;
//        }
//    }
//    while(!q.empty())
//        q.pop();
//    return ans;
//
//    
//}
