#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    map<int, string> m;
    int id;
    string name;
    while(true){
        cout << "enter student id (-1 to end) : ";
        cin >> id;
        if(id==-1){
            break;
        }
        cout << "enter student name : ";
        cin >> name;
        m[id]=name;
    }
    vector<pair<int,string>> v(m.begin(), m.end());
    sort(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end();it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}