#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<int> l;
    int n,k; cin >> n>> k;
    int y =k-1;
    for(int i = 1;i<=n;i++)
    {
        l.push_back(i);
    }
    list<int>::iterator t = l.begin();
    while(y--)
        t++;
    cout << '<';
    while(n--)
    {
        int x = k;
        if(l.size()!=1)
            cout << *t << ", ";
        else
            cout << *t;
        t = l.erase(t);
        while(x--)
            t++;
    }
    cout << '>';
    return 0;
}
