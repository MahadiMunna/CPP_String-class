#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "hello";
    string b = "world";

    a = a + b;
    cout << a << endl;
    cout << b << endl;
    a = "ore";
    b = "bhai";
    a.append(b); // work as a+=b
    cout << a << endl;
    cout << b << endl;

    a = "hello";
    a[5] = 'A'; // did't work beacuse no index here but push can do
    cout << a << endl;
    a.push_back('A'); // push_back expand the memory size
    cout << a << endl;
    a.pop_back(); // remove from last index
    cout << a << endl;

    a = "gello";
    cout << a << endl;
    a.assign("gello na");
    cout << a << endl;
    a.erase(4,2);//here 4 is starting index and 1 is number of character to be delete;
    cout << a << endl;

    a.replace(0,1,"H");
    a.replace(4,2,"o World");//same as erase but all need to declare which string will be add
    cout<<a<<endl;
    a.insert(5," Munna");

    cout<<a<<endl;
    return 0;
}