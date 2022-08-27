//#include <iostream>
//using namespace std;
//int n;
//int blue = 0;
//int white = 0;
//int field[128][128];
//
//bool issame(int x,int y,int n)
//{
//    for(int i = x;i<x+n;i++)
//    {
//        for(int j = y;j<y+n;j++)
//        {
//            if(field[x][y] != field[i][j])
//                return false;
//        }
//    }
//    return true;
//}
//void recursive(int x,int y, int n)
//{
//    if(issame(x,y,n))
//    {
//        if(field[x][y] == 1)
//            blue++;
//        else
//            white++;
//        return;
//    }
//    int temp = n/2;
//    for(int i=0;i<2;i++)
//    {
//        for(int j =0;j<2;j++)
//        {
//            recursive(x+i*temp,y+j*temp,temp);
//        }
//    }
//}
//int main(void)
//{
//    cin >> n;
//    for(int i =0;i<n;i++)
//    {
//        for(int j = 0;j<n;j++)
//        {
//            cin >> field[i][j];
//        }
//    }
//    recursive(0,0,n);
//    cout << white << '\n' << blue;
//}
