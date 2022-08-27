//#include <vector>
//#include <utility>
//#include <algorithm>
//#include <iostream>
//#define NUMBER first
//#define COUNT second
//using namespace std;
//
//int n,c;
//
//vector<pair<int,int>> v;
//
//bool cmp(const pair<int,int>& a, const pair<int,int>& b)
//{
//    return a.COUNT > b.COUNT;
//}
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> c;
//    for(int i = 0;i<n;i++)
//    {
//        bool chk = false;
//        int tmp;
//        cin >> tmp;
//        for(auto& x : v)
//        {
//            if(x.NUMBER == tmp)
//            {
//                x.COUNT++;
//                chk = true;
//            }
//        }if(!chk) v.push_back({tmp,1});
//    }
//    stable_sort(v.begin(),v.end(),cmp);
//    for(auto x : v)
//    {
//        while(x.COUNT--)
//            cout << x.NUMBER << '\n';
//    }
//    return 0;
//}
