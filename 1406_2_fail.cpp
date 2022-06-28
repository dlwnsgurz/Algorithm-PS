//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int mx = 1000005;
//char dat[mx];
//int nxt[mx], pre[mx];
//int unused = 1;
//
//
//void traverse()
//{
//    int cur = nxt[0];
//    while(cur != -1)
//    {
//        cout << dat[cur];
//        cur = nxt[cur];
//    }
//}
//
//void insert(int addr, char c)
//{
//    dat[unused] = c;
//    pre[unused] = addr;
//    nxt[unused] = nxt[addr];
//    if(nxt[addr] != -1) pre[nxt[addr]] = unused;
//    nxt[addr] = unused;
//    unused++;
//}
//
//void erase(int addr)
//{
//    nxt[pre[addr]] = nxt[addr];
//    if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
//}
//
//int main(void)
//{
//    fill(nxt,nxt+mx,-1);
//    fill(pre,pre+mx,-1);
//    string str; cin >> str;
//    int m; cin >> m;
//    int cursor = 0;
//    for(auto x : str)
//    {
//        insert(cursor++, x);
//    }
//
//    while(m--)
//    {
//        char c; cin >> c;
//        if(c == 'P')
//        {
//            char cc; cin >> cc;
//            {
//                insert(cursor,cc);
//                cursor = nxt[cursor];
//            }
//
//        }
//        else if(c== 'L')
//        {
//            if(pre[cursor] != -1)
//                cursor = pre[cursor];
//        }
//        else if(c=='D')
//        {
//            if(nxt[cursor] != -1)
//                cursor = nxt[cursor];
//        }
//        else if(c=='B')
//        {
//            if(pre[cursor] != -1)
//            {
//                erase(cursor);
//                cursor = pre[cursor];
//            }
//        }
//    }
//    traverse();
//    return 0;
//}
