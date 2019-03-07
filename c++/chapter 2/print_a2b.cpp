#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    cout << "Enter two number: " << endl;
    int a = 0, b = 0;
    cin >> a >> b;
    while (a <= b){
        cout << a << endl;
        ++a;
    }
    system("pause");
    return 0;
}