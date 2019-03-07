#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    while(getline(cin, s)){
        for (char &c : s)
            c = 'X';
        cout << s << endl;
        }
    return 0;
}