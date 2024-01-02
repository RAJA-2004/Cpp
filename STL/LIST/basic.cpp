#include <iostream>
#include <list>
using namespace std;
bool comp(int a,int b){
    return a>b;
}
int main(){
    list <int> l1 {1,2,3,4,5,6};

    list <int> l2 {2,4,5,7,8};
    // int n;
    // cout << "enter size of l2 : ";
    // cin >> n;
    // for(int i=0;i<n;i++){
    //     int a;
    //     cin >> a;
        
        // odd even pushing
    //     if(a & 1)
    //         l2.push_back(a);
    //     else
    //         l2.push_front(a);
    // }

    cout << endl << "list 1 : ";
    for(auto it=l1.begin();it != l1.end(); ++it){
        cout << *it << " ";
    }

    cout << endl << "list 2 : ";
    for(auto it=l2.begin();it != l2.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    cout << endl << l1.front() << " " << l1.back() << endl;
    cout << l2.front() << " " << l2.back() << endl;

    // l1.reverse();
    // l1.push_front(10);
    // l1.push_back(20);
    // l1.remove(3);
    // l1.pop_front();
    // l1.pop_back();
    // l1.swap(l2);
    // if(l1.empty()){
    //     cout << "true" << endl;
    // }else{
    //     cout << "false" << endl;
    // }

    // l1.merge(l2); // merged in sorted format
    // l1.merge(l2,comp);

    l1 = l2;

    // printing
    cout << "list 1" << endl;
    for(auto it=l1.begin();it != l1.end(); ++it){
        cout << *it << " ";
    }

    cout << endl << "list 2" << endl;
    for(auto it=l2.begin();it != l2.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}