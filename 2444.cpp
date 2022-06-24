/*#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i =0;i<n;i++)
    {
        int j = n-i-1;
        while(j--)
            cout << ' ';
        int k = 2*i+1;
        while(k--)
            cout << '*';
        cout << '\n';
    }
    for(int i = 1; i<n;i++)
    {
        int j=i;
        while(j--)
            cout << ' ';
        int k = 2*n - (2*i+1);
        while(k--)
            cout << '*';
        cout << '\n';
     }
    return 0;
}*/
