#include <iostream>
using namespace std;

class raja{
    private:
    int roll;
    public:
    // default constructor 
    raja(){
        cout << "contructor invoked" << endl;
    }
    // parameterised constructor
    raja(int a){
        cout << "parameterised constructor invoked" << endl;
    }
    // copy constructor
    raja(raja &obj){
        cout << "copy constructor invoked" << endl;
    }
    // destructor
    ~raja(){
        cout << "destructor invoked" << endl;
    }
};
int main(){
    raja obj1;
    raja(10);
    raja obj2(obj1);
    return 0;
}
