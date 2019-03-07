#include<iostream>
#include<string>
#include<vector>
#include<typeinfo>
using namespace std;
int main()
{
    vector<unsigned> scores(10, 0);
    int grade;
    int count;
    while(cin >> grade){
        if (grade <= 100){
            count = grade/10;
            ++*(scores.begin() + count);
        }else{
            cout << "The grade is out of range!" << endl;
        }
    }
    int num = 0;
    for(auto i : scores){
        cout << "The number of whose grade between "
         << num * 10 << " and " << (num + 1) * 10 
         << " is " << i << endl;
        ++num;
        }
    system("pause");
    return 0;
    }