//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int field[10];
//int arr[10];
//bool isused[10];
//int n,m;
//
//void recursive(int k)
//{
//    if(k==m)
//    {
//        for(int i =0;i<m;i++)
//            cout << arr[i] << ' ';
//        cout << '\n';
//        return;
//    }
//    for(int i = 0;i<m;i++)
//    {
//        if(!isused[i])
//        {
//            arr[k] = field[i];
//            isused[i] = 1;
//            recursive(k+1);
//            isused[i] = 0;
//        }
//    }
//}
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m;
//    for(int i =0;i<n;i++)
//        cin >> field[i];
//    sort(field,field+n);
//    recursive(0);
//}
