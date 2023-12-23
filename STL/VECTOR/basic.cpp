#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> m;
    cout << "enter 10 elements" << endl;
    for(int i=0;i<10;i++){
        int a;
        cin >> a;
        m.push_back(a);
    }

    if(m.empty()){
        cout << "vector is empty" << endl; 
    }
    else{
        cout << "removing the last element" << endl;
        m.pop_back();
    }

    for(auto it=m.rbegin();it!=m.rend();it++){
        cout << *it << " ";
    }
    return 0;
}