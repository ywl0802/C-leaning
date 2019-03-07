#include<iostream>
#include<string>
#include<vector>
#include<typeinfo>
#include<cstddef>
using namespace std;
int main()
{
    int arr[3][4];
    size_t cnt = 0;
    for(auto &row : arr)
        for(auto &col :row){
            col = cnt;
            ++cnt;
        }
    for (auto p = arr ;p != arr + 3; ++p){
        for(auto q =*p ; q != *p + 4; ++q)
            cout << *q << " ";
    
        cout << endl;
        }
    cout << endl;
    for (auto m =begin(arr); m != end(arr); ++m){
        for(auto n = begin(*m); n != end(*m); ++n)
            cout << *n << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}
