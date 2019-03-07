#include<iostream>
#include<string>
#include<vector>
#include<typeinfo>
#include<cstddef>
#include<cstring>
using namespace std;
int main()
{
    char a[100] = "Hello World!";
    char b[100] = "I'm study cplusplus.";
    char c[200];
    strcpy(c,a);
    strcat(c," ");
    strcat(c,b);
    cout << c << endl;
    system("pause");
    return 0;

}