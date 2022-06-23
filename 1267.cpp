/*#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int m = 0;
    int y = 0;
    int* arr = new int[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
        y += (arr[i] / 30) * 10 + 10;
        m += (arr[i] / 60) * 15 + 15;
    }
    
    if(m == y)
        cout << "Y M " << m;
    else if(m>y)
        cout << "Y " << y;
    else
        cout << "M " << m;
    return 0;
}
*/
