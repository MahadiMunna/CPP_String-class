#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[10]="Hello";
    // s="gello";//can't do this
    strcpy(s,"gello");//have to do it
    cout<<s<<endl;

    //but cpp is offering String type!

    string s1="Hello";
    string s2=s1;
    s1==s2?cout<<"same":cout<<"not same";

    return 0;
}