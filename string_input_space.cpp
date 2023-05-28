#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int x;
    cin>>x;
    cin.ignore();//to avoid enter as input
    getline(cin,s);//cin never take enter as input but getline does
    cout<<x<<endl;
    cout<<s<<endl;
    return 0;
}