#include <iostream>
using namespace std;

int arr[1000002];
int tmp[1000002];
int n;
void merge(int st, int en)
{
    int mid = (st+en) / 2;
    int apos = st, bpos = mid;
    for(int i = st;i<en;i++)
    {
        if(apos == mid) tmp[i] = arr[bpos++];
        else if(bpos == en) tmp[i] = arr[apos++];
        else if(arr[apos] <= arr[bpos]) tmp[i] = arr[apos++];
        else tmp[i] = arr[bpos++];
    }
    for(int i = st;i<en;i++) arr[i] = tmp[i];
}

void merge_sort(int st, int en)
{
    if(st+1 == en) return;
    int mid = (st+en) / 2;
    merge_sort(st, mid);
    merge_sort(mid, en);
    merge(st,en);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0;i<n;i++) cin >> arr[i];
    merge_sort(0,n);
    for(int i = 0;i<n;i++) cout << arr[i] << '\n';
}
