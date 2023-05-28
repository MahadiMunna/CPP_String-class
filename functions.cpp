#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="hello world";
    cout<<s.size()<<endl;//string length
    cout<<s.max_size()<<endl;//machine capability
    cout<<s.capacity()<<endl;//Dynamic memory allocated size
    s.clear();//clear string
    cout<<s.size()<<endl;//size after clear

    s.empty()?cout<<"Empty\n":cout<<"Not empty\n";//s.empty() return true/false

    cin>>s;//input: Hello_world
    cout<<s<<endl;
    s.resize(5);//change the string size
    cout<<s<<endl;
    s.resize(8,'x');//as i resized before so rest was empty and i fill them with x
    cout<<s<<endl;



    return 0;
}