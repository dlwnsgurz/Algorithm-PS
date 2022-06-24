/*#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int visited[1000000] = {};
    int x;
    cin >> n;
    int* arr = new int [n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    cin >> x;
    int count = 0;
    for(int i =0;i<n;i++)
    {
        if(x>arr[i] && (x-arr[i])<1000000)
        {
            if(visited[x-arr[i]] == 1)
                count++;
        }
        visited[arr[i]] = 1;
    }
    
    cout << count;
    return 0;
}*/
