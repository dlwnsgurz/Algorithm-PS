//#include <iostream>
//
//using namespace std;
//
//const int MX = 1000005;
//int dat[MX], pre[MX], nxt[MX];
//int unused = 1;
//
//void traverse()
//{
//    int cur = nxt[0];
//    while(cur != -1)
//    {
//        if(cur == nxt[0])
//        {
//            cout << '<' << dat[cur] << ", ";
//            cur = nxt[cur];
//        }
//        else
//        {
//            cout << dat[cur] << ", ";
//            if(nxt[cur] == -1)
//                cout << dat[nxt[cur]] << ">";
//            cur = nxt[cur];
//        }
//    }
//}
//
//void insert(int addr, int num)
//{
//
//    dat[unused] = num;
//    pre[unused] = addr;
//    nxt[unused] = nxt[addr];
//    pre[nxt[addr]] = unused;
//    nxt[addr] = unused;
//    unused++;
//}
//
//void erase(int addr)
//{
//    nxt[pre[addr]] = nxt[addr];
//    pre[nxt[addr]] = pre[addr];
//}
//
//int main(void)
//{
//    int n,k; cin >> n >> k;
//    fill(pre,pre+MX,-1);
//    fill(nxt,nxt+MX,-1);
//    int cursor = 0;
//    for(int i =1;i<=n;i++)
//    {
//        insert(cursor,i);
//        cursor = nxt[cursor];
//    }
//    cursor = nxt[0];
//    int x = k-1;
//    while(x--)
//        cursor = nxt[cursor];
//    nxt[unused-1] = nxt[0];
//    pre[1] = n;
//    int y = n;
//    cout << '<';
//    while(n--)
//    {
//        int x = k;
//        if(y==1)
//            cout << dat[cursor];
//        else if(n!=0)
//            cout << dat[cursor] << ", ";
//        else
//            cout << dat[cursor];
//        erase(cursor);
//        while(x--)
//            cursor = nxt[cursor];
//    }
//    cout << '>';
//    return 0;
//}
