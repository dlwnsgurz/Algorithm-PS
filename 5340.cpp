//#include <iostream>
//#include <deque>
//#include <algorithm>
//using namespace std;
//
//void printdeque(deque<int> &d)
//{
//    cout << '[';
//    for(int i =0;i<d.size();i++)
//    {
//        cout << d[i];
//        if(i+1 !=d.size())
//            cout << ",";
//    }
//    cout << ']' << '\n';
//}
//int main(void)
//{
//    int t; cin >> t;
//    while(t--)
//    {
//        deque<int> d;
//        string p; cin >> p;
//        int n; cin >> n;
//        string str; cin >> str;
//        int number =0;
//        bool possible = true;
//        for(int i = 1;i<str.size()-1;i++)
//        {
//            if(str[i]!=',')
//            {
//                number= number*10 + (str[i]-'0');
//            }
//            else
//            {
//                d.push_back(number);
//                number = 0;
//            }
//        }
//        if(number)
//        {
//            d.push_back(number);
//        }
//        int res = 0;
//        for(int i = 0;i<p.size();i++)
//        {
//            if(p[i] == 'R')
//            {
//                res = 1 - res;
//            }
//            else
//            {
//                if(d.empty())
//                {
//                    cout << "error" << '\n';
//                    possible = false;
//                    break;
//                }
//                if(res)
//                {
//                    d.pop_back();
//                }
//                else
//                {
//                    d.pop_front();
//                }
//            }
//        }
//        if(possible)
//        {
//            if(res)
//                reverse(d.begin(),d.end());
//            printdeque(d);
//        }
//    }
//}
