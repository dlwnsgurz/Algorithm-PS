/*#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[21];
    for(int i = 1;i<21;i++) arr[i] = i;
    int count = 10;
    while(count--)
    {
        int a,b;
        cin >> a >> b;
        int j = b;
        for(int i = a;i<=(a+b)/2;i++)
        {
            swap(arr[i],arr[j]);
            j--;
        }
    }
    for(int i = 1;i<21;i++)
    {
        cout << arr[i] << ' ';
    }
}
*/
