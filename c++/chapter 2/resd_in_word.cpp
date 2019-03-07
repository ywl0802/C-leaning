#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word;
    //每次读入一个字符，直至到达文件末尾
    while (cin >> word)
        cout << word << endl;
    system("pause");
    return 0;
}

//一行中使用空格分开的多个字符会分别读取