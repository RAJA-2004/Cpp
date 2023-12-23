#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map <int, string> m;

    // insert function
    m.insert({1,"RAJA"});

    // insert with make_pair
    m.insert(make_pair(2,"SOURAB"));

    // direct insert
    m[3]="rohan";
    m[3]="MOHIT";
    m[10]="SHUBHAM";
    m[5]="RAGE";

    // loop using iterator
    for (auto it=m.begin();it!=m.end();it++){
        cout << it->first << " " << (*it).second << endl;
    }

    cout << "<----------------->" << endl;

    // find function
    if(m.find(1)!=m.end()){
        cout << m[1] << " " << m.find(3)->second << endl;
    }

    // erase function
    m.erase(1); // single
    m.erase(m.find(2),m.find(10)); // range
    for (auto it=m.begin();it!=m.end();it++){
        cout << it->first << " " << (*it).second << endl;
    }

    return 0;
}