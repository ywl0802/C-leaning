//编写一段程序从标准输入中读入多个字符串并将它们连接在一起，输出连接成的大字符串
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word, str_sum;
    while(cin >> word){   //为什么不能使用while（cin >> word)呢？
        str_sum = str_sum + word;       
    }
    cout << str_sum << endl;
    return 0;
}