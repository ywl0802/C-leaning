#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line;
    //每次读入一整行，直至到达文件末尾
    while (getline(cin,line))
        cout << line << endl;
    system("pause");
    return 0;
}