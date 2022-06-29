//#include <iostream>
//#include <deque>
//#include <vector>
//using namespace std;
//
//int main(void)
//{
//    int n; cin >> n;
//    int m; cin >> m;
//    int k = 0;
//    int y = m;
//    vector<int> v;
//    deque<int> d;
//    for(int i = 1;i<=n;i++)
//    {
//        d.push_back(i);
//    }
//    while(m--)
//    {
//        int x; cin >> x;
//        v.push_back(x);
//    }
//    int sum =0;
//    while(k<y)
//    {
//        int i = 0;
//        for(auto x : d)
//        {
//            if(x == v[k])
//                break;
//            i++;
//        }
//        if(i<=(d.size()+1)/2)
//        {
//            while(d.front()!=v[k])
//            {
//                d.push_back(d.front());
//                d.pop_front();
//            }
//            d.pop_front();
//            sum +=i;
//        }
//        else if(i>(d.size()+1)/2)
//        {
//            while(d.back() != v[k])
//            {
//                d.push_front(d.back());
//                d.pop_back();
//            }
//            int j = d.size() - i;
//            d.pop_back();
//            sum +=j;
//        }
//        k++;
//    }
//    cout << sum;
//    return 0;
//}
