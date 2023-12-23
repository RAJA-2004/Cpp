#include<iostream>
using namespace std;

template <class T>  T maxi(T a, T b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){

    cout<<maxi(1,5)<<endl;
    cout<<maxi(5.3,1.5)<<endl;
    

    return 0;
}