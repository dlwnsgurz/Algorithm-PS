/*#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[3];
    for(int i =0;i<3;i++)
    {
        cin >> arr[i];
    }
    if(arr[0]==arr[1] && arr[1] == arr[2])
        cout << 10000 + arr[1]*1000;
    else if(arr[0]==arr[1])
        cout << 1000 + arr[0]*100;
    else if(arr[0]==arr[2])
        cout << 1000 + arr[0]*100;
    else if(arr[1]==arr[2])
        cout << 1000 + arr[1]*100;
    else
        cout << *max_element(arr,arr+3)*100;
    return 0;
        
}
*/
