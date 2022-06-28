//#include <iostream>
//using namespace std;
//
//const int mx = 1000005;
//char dat[mx];
//int pre[mx], nxt[mx];
//int unused = 1;
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
//void erase(int addr)
//{
//    nxt[pre[addr]] = nxt[addr];
//    if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
//}
//void traverse()
//{
//    int cur = nxt[0];
//    while(cur != -1)
//    {
//        cout << dat[cur];
//        cur = nxt[cur];
//    }
//    cout << '\n';
//}
//
//int main(void)
//{
//    int n; cin >> n;
//    while(n--)
//    {
//        string s; cin >> s;
//        fill(pre,pre+mx,-1);
//        fill(nxt,nxt+mx,-1);
//        unused = 1;
//        int cursor = 0;
//        for(int i = 0;i<s.size();i++)
//        {
//            if(s[i] == '<')
//            {
//                if(pre[cursor] != -1)
//                    cursor = pre[cursor];
//            }
//            else if(s[i] == '>')
//            {
//                if(nxt[cursor] != -1)
//                    cursor = nxt[cursor];
//            }
//            else if(s[i] == '-')
//            {
//                if(pre[cursor] != -1)
//                {
//                    erase(cursor);
//                    cursor = pre[cursor];
//                }
//            }
//            else
//            {
//                insert(cursor,s[i]);
//                cursor = nxt[cursor];
//            }
//        }
//        traverse();
//    }
//
