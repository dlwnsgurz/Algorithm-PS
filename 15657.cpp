//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int field[10];
//int arr[10];
//int n,m;
//
//void recursive(int k)
//{
//    if(k>m)
//    {
//        for(int i = 1;i<=m;i++)
//        cout << arr[i] << ' ';
//        cout << '\n';
//        return;
//    }
//    for(int i = 1;i<=n;i++)
//    {
//        if(arr[k-1] > field[i]) continue;
//        arr[k] = field[i];
//        recursive(k+1);
//    }
//}
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m;
//    for(int i = 1;i<=n;i++)
//        cin >> field[i];
//    sort(field,field+n+1);
//    recursive(1);
//}
