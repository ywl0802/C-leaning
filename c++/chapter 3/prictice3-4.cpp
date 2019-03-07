#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1, s2, s;
    cin >> s1 >> s2;
    auto a = s1.size(), b = s2.size();
    if(a == b)
        cout << "The two strings are equal." << endl;
    else{
        s = a<b?s2:s1;
        cout << s << endl;
    }
    system("pause");
    return 0;

}