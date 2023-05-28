#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl<<endl;
    stringstream ss(s);//divide sentence and store words
    string word;
    int cnt = 0;
    while(ss >> word){//this will print untill ss is empty and it gives word one by one
        cout<<word<<endl;
        cnt++;
    }
    cout<<cnt;
    return 0;
}