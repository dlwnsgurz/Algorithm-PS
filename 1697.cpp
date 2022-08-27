//#include <bits/stdc++.h>
//using namespace std;
//
//int dist[100001];
//int dir[3] = {0,1,2};
//int a,b;
//queue<int> q;
//int func(int,int);
//int main(void)
//{
//    cin >> a >> b;
//    q.push(a);
//    if(a==b)
//    {
//        cout << 0;
//        return 0;
//    }
//    fill(dist,dist+100001,-1);
//    dist[a] = 0;
//    while(!q.empty())
//    {
//        int cur = q.front(); q.pop();
//        for(int i = 0;i<3;i++)
//        {
//            int temp = func(cur,dir[i]);
//            if(temp < 0 || temp >= 100001) continue;
//            if(dist[temp] >=0) continue;
//            dist[temp] = dist[cur] + 1;
//            if(temp == b)
//                cout << dist[temp];
//            q.push(temp);
//        }
//    }
//    return 0;
//}
//int func(int x, int a)
//{
//    if(a==0)
//        return x - 1;
//    else if(a==1)
//        return x + 1;
//    else if(a==2)
//        return x*2;
//}
