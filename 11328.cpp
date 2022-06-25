/*#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 0;i<n;i++)
    {
        string str;
        string str2;
        int arr[26] = {};
        int arr2[26] = {};
        cin >> str >> str2;
        for(int j = 0;j<str.size();j++)
            arr[str[j]-'a']++;
        for(int k = 0;k<str2.size();k++)
            arr2[str2[k] -'a']++;
        if(equal(arr,arr+26,arr2,arr2+26))
            cout << "Possible" << '\n';
        else
            cout << "Impossible" << '\n';
    }
}*/


