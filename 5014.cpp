//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//int f,s,g,u,d;
//int field[1000000];
//int dist[1000000];
//int dir[2];
//int main(void)
//{
//    cin >> f >> s >> g >> u >> d;
//    d = -d;
//    dir[0] = u;
//    dir[1] = d;
//    fill(dist+1,dist+f+1,-1);
//    dist[s] = 0;
//    queue<int> q;
//    q.push(s);
//    if(s==g)
////    {
//        cout << 0;
//        return 0;
//    }
//    while(!q.empty())
//    {
//        int cur = q.front(); q.pop();
//        for(int i = 0;i<2;i++)
//        {
//            int temp = cur + dir[i];
//            if(temp < 1 || temp > f) continue;
//            if(dist[temp] >= 0) continue;
//            q.push(temp);
//            dist[temp] = dist[cur] + 1;
//            if(temp == g)
//            {
//                cout << dist[temp];
//                return 0;
//            }
//        }
//    }
//    cout << "use the stairs";
//    return 0;
//}
//
