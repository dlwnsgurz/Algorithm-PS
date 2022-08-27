//#include <iostream>
//using namespace std;
//
//int field[64][64];
//int n;
//
//bool issame(int x,int y,int n)
//{
//    for(int i = x;i<x+n;i++)
//    {
//        for(int j =y;j<y+n;j++)
//        {
//            if(field[i][j] != field[x][y])
//                return false;
//        }
//    }
//    return true;
//}
//
//void recursive(int x,int y,int n)
//{
//    if(issame(x,y,n))
//    {
//        cout << field[x][y];
//        return;
//    }
//    int temp = n/2;
//    cout << '(';
//    for(int i = 0;i<2;i++)
//    {
//        for(int j =0;j<2;j++)
//        {
//            recursive(x+i*temp,y+j*temp,temp);
//        }
//    }
//    cout << ')';
//}
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n;
//    char c;
//    for(int i = 0 ;i<n;i++)
//    {
//        for(int j =0;j<n;j++)
//        {
//            cin >> c;
//            field[i][j] = c-'0';
//        }
//    }
//    recursive(0,0,n);
//
//}
