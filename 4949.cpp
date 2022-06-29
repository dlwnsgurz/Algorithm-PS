//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int main(void)
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    while(1)
//    {
//        bool isyes = true;
//        stack<char> s;
//        string str; getline(cin,str);
//        if(str == ".")
//            return 0;
//            for(char c : str)
//            {
//                if(c == '(')
//                    s.push(c);
//                else if(c == '[')
//                    s.push(c);
//                else if(c== ')')
//                {
//                    if(s.empty())
//                    {
//                        cout << "no" << '\n';
//                        isyes = false;
//                        break;
//                    }
//                    if(s.top() != '(')
//                    {
//                        cout << "no" << '\n';
//                        isyes = false;
//                        break;
//                    }
//                    else
//                    {
//                        s.pop();
//                    }
//                }
//                else if(c == ']')
//                {
//                    if(s.empty())
//                    {
//                        cout << "no" << '\n';
//                        isyes = false;
//                        break;
//                    }
//                    if(s.top() != '[')
//                    {
//                        cout << "no" << '\n';
//                        isyes = false;
//                        break;
//                    }
//                    else
//                    {
//                        s.pop();
//                    }
//                }
//                else if(c == '.')
//                {
//                    if(!s.empty())
//                    {
//                        cout << "no" << '\n';
//                        isyes = false;
//                        break;
//                    }
//                }
//            }
//        if(isyes)
//        {
//           if(s.empty())
//              cout << "yes" << '\n';
//        }
//        
//    }
//    return 0;
//}
