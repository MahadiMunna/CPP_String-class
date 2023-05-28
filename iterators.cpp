#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }
    cout<<*a.begin()<<endl;//point at index[0]
    cout<<*(a.end()-1)<<endl;//end() point at last index

    // string::iterator it;//iterator declare

    for(auto it=a.begin();it<a.end();it++){//can be declare iterator using auto
        cout<<*it<<" ";
    }

    return 0;
}