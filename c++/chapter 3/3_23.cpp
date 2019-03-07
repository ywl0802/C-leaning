#include<iostream>
#include<string>
#include<vector>
#include<typeinfo>
using namespace std;
int main()
{
    vector<int> tenn(1000, 3);
    for(auto num = tenn.begin(); num != tenn.end(); ++num)
        cout << (*num) * 2 << endl;
    system("pause");
    return 0 ;
}
    

    