#include<iostream>
#include<string>
#include<vector>
#include<typeinfo>
#include<cctype>
using namespace std;
int main()
{
    cout << "Please type in words and end with Enter+(ctrl+Z)+Enter." << endl;
    vector<string> lowtoup;
    string word;
    while(cin >> word){
        lowtoup.push_back(word);
    }
    if (lowtoup.size() == 0) {
        cout << "The input is failure! " << endl;
    } else {
        cout << "The upper word is:" << endl;
        for(auto &i : lowtoup)
            for(auto &c : i)
                c = toupper(c);
        for(auto i : lowtoup)
            cout << i << "\n";
        cout << endl;}
    system("pause");
    return 0;
}