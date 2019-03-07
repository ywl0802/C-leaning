#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    string s("some string");
    for (decltype(s.size()) index = 0 ;
        index != s.size() && !isspace(s[index]); ++index)
        //index != s.size()表明序号不超过字符串长度  ！isspace(s[index])检查该字符是否为空格
        //for 循环还可以使用for（初始变量；循环条件；变量改变)的格式，貌似是从C继承过来的
            s[index] = toupper(s[index]);
    cout << s << endl;
    system("pause");
    return 0;
}