#include<iostream>
#include<string>
#include<vector>
#include<typeinfo>
#include<cstddef>
using namespace std;
int main()
{
    int a[10];
    for(size_t in = 0; in <= 9; ++in ){
        a[in] = in;    }

    int a2[10];
    for(size_t in2 = 0; in2 <= 9; ++in2 )
        a2[in2] = a[in2];
    for(auto i : a2)
        cout << i << endl;
    system("pause");
    return 0; 

}