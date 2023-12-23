#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <numeric>
using namespace std;

int main(){
    vector<int> v;
    for(int i=0;i<4;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(auto it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    sort(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    reverse(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    cout << *find(v.begin(),v.end(),3);
    cout << endl << endl;
    map<int, string> m;
    int id;
    string name;
    while(true){
        cout << "enter id : ";
        cin >> id;
        if(id==-1){
            break;
        }
        cout << "enter name : ";
        cin >> name;
        m[id]=name;
    }
    for(auto it=m.begin();it!=m.end();it++){
        cout << it->first << " " << it->second << endl;
    }
    m.erase(2);
    vector<pair<int, string>> vrr(m.begin(),m.end());
    sort(vrr.begin(),vrr.end());
    reverse(vrr.begin(),vrr.end());
    for(auto it=vrr.begin();it!=vrr.end();it++){
        cout << it->first << " " << it->second << endl;
    }
    cout << vrr.empty();
    cout << endl;
    vrr.pop_back();
    for(auto it=vrr.begin();it!=vrr.end();it++){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}