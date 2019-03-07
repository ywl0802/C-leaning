#include<iostream>
#include<string>
#include<vector>
#include<typeinfo>
#include<cstddef>
using namespace std;
int main()
{
    int a[10] = {1,2,4,5,2,1,3,5,3,1};
    int *e = &a[10];
    for(int *c = a; c != e; ++c)
        *c = 0;
    for (auto i : a)
    cout << i << endl;
    system("pause");
    return 0;
}