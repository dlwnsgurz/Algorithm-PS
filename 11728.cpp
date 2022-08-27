//#include <iostream>
//using namespace std;
//
//int arr1[1000002];
//int arr2[1000002];
//int ans[1000002];
//int a,b;
//int apos,bpos;
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> a >> b;
//    for(int i = 0;i<a;i++)
//        cin >> arr1[i];
//    for(int i = 0;i<b;i++)
//        cin >> arr2[i];
//    for(int i = 0;i<a+b;i++)
//    {
//        if(arr1[apos] > arr2[bpos])
//            ans[i] = arr2[bpos++];
//        else
//            ans[i] = arr1[apos++];
//        if(apos > a-1 || bpos > b-1) break;
//    }
//    if(apos < a)
//    {
//        for(int i = apos+bpos; i<a+b; i++)
//            ans[i] = arr1[apos++];
//    }
//    if(bpos < b)
//    {
//        for(int i = apos+bpos; i<a+b; i++)
//            ans[i] = arr2[bpos++];
//    }
//    for(int i = 0;i<a+b;i++)
//        cout << ans[i] << ' ';
//}
//
