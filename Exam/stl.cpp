#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> ans(n);
    for(int i=0;i<n;i++){
        cin >> ans[i];
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    // if(ans.empty()){
    //     cout << "vector is empty" << endl;
    // }else{
    //     cout << "vector is not empty" << endl;
    // }
    // ans.clear();
    // if(ans.empty()){
    //     cout << "vector is empty" << endl;
    // }else{
    //     cout << "vector is not empty" << endl;
    // }
    reverse(ans.begin(),ans.end());
    for(auto it=ans.begin();it!=ans.end();++it){
        cout << *it << " ";
    }
    cout << endl;
    for(auto it=ans.rbegin();it!=ans.rend();++it){
        cout << *it << " ";
    }
}