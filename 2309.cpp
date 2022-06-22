/*#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[9];
    int arr2[7];
    int sum = 0;
    int index1, index2;
    for(int i =0;i<9;i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    for(int i = 0;i<9;i++)
    {
        for(int j =i+1;j<9;j++)
        {
            if((sum - arr[i] - arr[j]) == 100)
            {
                index1 = i;
                index2 = j;
            }
        }
    }
    for(int i =0,j=0;i<9;i++)
    {
       if(index1==i)
            continue;
        else if(index2==i)
            continue;
        else
            arr2[j] = arr[i];
            j++;
    }
    sort(arr2,arr2+7);
    for(int i = 0;i<7;i++)
        cout << arr2[i] << '\n';
    return 0;
    
}*/
