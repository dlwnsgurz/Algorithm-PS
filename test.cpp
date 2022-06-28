#include <iostream>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void pop()
{
    pos--;
}

int top()
{
    return dat[pos-1];
}

void push(int x)
{
    dat[pos++] = x;
}

int empty()
{
    return pos==0? 1 : 0;
}

int size()
{
    return pos;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m; cin >> m;
    while(m--)
    {
        string str; cin >> str;
        if(str == "push")
        {
            int x; cin >> x;
            push(x);
        }
        else if(str=="pop")
        {
            if(empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << top() << '\n';
                pop();
            }
        }
        else if(str == "size")
        {
            cout << size() << '\n';
        }
        
        else if(str == "empty")
        {
            cout << empty() << '\n';
        }
        else
        {
            if(empty())
                cout << -1 << '\n';
            else
                cout << top() << '\n';
        }
    }
    
    
}
