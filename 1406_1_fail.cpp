/*#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<char> l(100000);
    string s; cin >> s;
    int m; cin>>m;
    for(int i =0;i<s.size();i++)
    {
        l.push_back(s[i]);
    }
    list<char>::iterator t = l.end();
    
    while(m--)
        {
            char c; cin >> c;
            if(c == 'L')
            {
                if(t==l.begin()){}
                else
                    t--;
            }
            else if(c== 'D')
            {
                if(t==l.end()){}
                else
                t++;
            }
            else if(c=='B')
            {
                l.erase(t);
            }
            else
            {
                char cc; cin >> cc;
                l.insert(t,cc);
            }
        }
    for(char x : l)
        cout << x;
    return 0;
}
*/
