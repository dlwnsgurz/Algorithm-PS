/*#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin >> a >> b >> c;
    int arr[10] = {};
    string number = to_string(a*b*c);
    for(int i =0;i<number.size();i++)
        arr[number[i]-'0']++;
    for(int e : arr)
        cout << e << '\n';
    return 0;
}
*/
