/*#include <iostream>
#include <algorithm>

using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[9] = {};
    while(n>0)
    {
        if(n%10 != 9)
            arr[n%10]++;
        else
            arr[6]++;
        n/=10;
    }
    if(arr[6] & 1)
        arr[6] = arr[6] /2 +1;
    else
        arr[6] /=2;
    cout << *max_element(arr,arr+9);
    return 0;
    
}*/
