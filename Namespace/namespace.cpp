#include <iostream>
using namespace std;

// self-made namespace
namespace name {
    int x = 10;
    int y = 20;
    void fun(){
        cout << "namespace function" << endl;
    }
    // namesapce within namespace
    namespace name1 {
        int z = 30;
        void fun2(){
            cout << "namespace within namespace" << endl;
        }
    }
}

// function with same name in different namesapce
namespace fact {
    void fun(){
        cout << "function with same name" << endl;
    }
}

// un-defined namespace
namespace {
    int a = 100;
    void fun3(){
        cout << "un-named namespace" << endl;
    }
}

int main(){

    cout << name::x << endl;
    name::fun();

    cout << name::name1::z << endl;
    name::name1::fun2();

    fact::fun();

    cout << a << endl;
    return 0;
}
