#include<iostream>
using namespace std;

template <class T>  T maxi(T a, T b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    return 0;
}

int main(){

    maxi(1,5);
    maxi('a','b');
    maxi(4.5,6.5);

    return 0;
}