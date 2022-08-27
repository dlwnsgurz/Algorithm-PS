//#include <iostream>
//using namespace std;
//int n,m,k;
//int field[45][45];
//int sticker[12][12];
//int r,c;
//int ans = 0;
//
//bool paste(int x, int y)
//{
//    for(int i = 0;i<r;i++)
//    {
//        for(int j = 0;j<c;j++)
//        {
//            if(field[x+i][y+j] == 1 && sticker[i][j] == 1)
//                return false;
//        }
//    }
//    for(int i= 0;i<r;i++)
//    {
//        for(int j =0;j<c;j++)
//        {
//            if(sticker[i][j] == 1)
//            field[i+x][j+y] = sticker[i][j];
//        }
//    }
//    return true;
//}
//
//void rotate()
//{
//    int temp[12][12];
//
//    for(int i = 0;i<r;i++)
//        for(int j = 0;j<c;j++)
//            temp[i][j] = sticker[i][j];
//
//    for(int i =0;i<c;i++)
//        for(int j =0;j<r;j++)
//            sticker[i][j] = temp[r-1-j][i];
//
//    swap(r,c);
//}
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m >> k;
//    while(k--)
//    {
//        cin >> r >> c;
//        for(int i = 0;i<r;i++)
//            for(int j =0;j<c;j++)
//                cin >> sticker[i][j];
//
//        for(int dir = 0;dir<4;dir++)
//        {
//            bool ispossible = false;
//            for(int i = 0;i<=n-r;i++)
//            {
//                for(int j = 0;j<=m-c;j++)
//                {
//                    if(paste(i,j))
//                    {
//                        ispossible = true;
//                        break;
//                    }
//                }
//                if(ispossible) break;
//            }
//            if(ispossible) break;
//            rotate();
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j = 0;j<m;j++)
//        {
//            ans+=field[i][j];
//        }
//    }
//    cout << ans;
//    return 0;
//}
//
//
//
//
//
///*
//    00 01 02        r = 2
//    10 11 12        c = 3
//
//
//    10 00
//    11 01
//    12 02
//
//temp[0][0] = arr[1][0]
//temp[0][1] = arr[0][0];
//
//temp[1][0] = arr[1][1];
//temp[1][1] = arr[0][1];
//
//temp[2][0] = arr[1][2];
//temp[2][1] = arr[0][2];
//
//temp[i][j] = arr[r-1-i][i]
//*/
