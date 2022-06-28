//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//int main(void)
//{
//    queue<int> Q;
//    int n,k; cin >> n >> k;
//    vector<int> V;
//    for(int i =1;i<=n;i++)
//    {
//        Q.push(i);
//    }
//
//    while(Q.size()!=0)
//    {
//        int x = k-1;
//        while(x--)
//        {
//            Q.push(Q.front());
//            Q.pop();
//        }
//        V.push_back(Q.front());
//        Q.pop();
//    }
//
//    for(auto t : V)
//        cout << t << ' ';
//
//    return 0;
//}
