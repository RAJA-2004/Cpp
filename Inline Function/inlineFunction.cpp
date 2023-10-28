#include <iostream>
using namespace std;

inline int fun(int a,int b){
    return a+b;
}

int main(){
    int x=1;
    int y=2;
    cout << "sum : " << fun(x,y) << endl;
    return 0;
}