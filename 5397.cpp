/*#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(void)
{
    int n; cin >> n;
    while(n--)
    {
        string s; cin >> s;
        list<char> l;
        auto t = l.begin();
        for(int i =0;i<s.size();i++)
        {
            if(s[i] == '<'){
                if(t != l.begin())
                    t--;
            }
            else if(s[i] == '>')
            {
                if( t!= l.end())
                    t++;
            }
            else if(s[i] == '-')
            {
                if(t!=l.begin())
                {
                    t--;
                    t = l.erase(t);
                }
            }
            else
            {
                l.insert(t,s[i]);
            }
        }
        for(auto x : l)
            cout << x;
        cout << '\n';
    }
    return 0;
}

*/
