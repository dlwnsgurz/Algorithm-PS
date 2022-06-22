/*#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr1[7];
    int arr2[7];
    fill(arr2,arr2+7,999);
    int count = 0;
    int sum = 0;
    for(int i =0;i<7;i++)
    {
        cin >> arr1[i];
        if(arr1[i] %2 ==1)
        {
            sum+=arr1[i];
            count++;
            arr2[i] = arr1[i];
        }
    }
    if(count==0)
    {
        cout << -1;
        return 0;
    }
    cout << sum << '\n';
    cout << *min_element(arr2,arr2+7);
    return 0;
        
    
}*/
