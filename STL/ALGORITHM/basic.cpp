#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    vector<int>v{3,1,5,2,9,7,-1,3,-3,4,3};

    // sort
    sort(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    // reverse
    reverse(v.begin(),v.end());
        for(auto it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    // max min element
    cout << *max_element(v.begin(),v.end()) << endl;
    cout << *min_element(v.begin(),v.end()) << endl;
    
    // find
    if(*find(v.begin(),v.end(),3)){
        cout << "present";
    }
    else{
        cout << "absent";
    }
    cout << endl;
    // position of that element
    cout << find(v.begin(),v.end(),5)-v.begin() << endl;

    // find the repetation count
    cout << count(v.begin(),v.end(),3) << endl;

    // index of just greater and lower element
    auto itlb = lower_bound(v.begin(),v.end(),4);
    auto itub = upper_bound(v.begin(),v.end(),4);
    cout << itlb-v.begin() << " " << itub-v.begin();
    return 0;
}