#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int k; cin >> k;
    int man[7] ={};
    int woman[7] = {};
    for(int i = 0; i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        if(a==0)
            woman[b]++;
        else
            man[b]++;
    }
    int sum = 0;
    for(int i = 1;i<7;i++)
    {
        int a,b;
        a = woman[i]/k;
        b = woman[i]%k;
        if(b==0)
            sum += a;
        else
            sum = sum + a + 1;
        a = man[i]/k;
        b = man[i]%k;
        if(b==0)
            sum += a;
        else
            sum = sum + a + 1;
    }
    cout << sum;
    return 0;
}
