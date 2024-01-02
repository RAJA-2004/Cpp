#include <iostream>
#include <fstream>
using namespace std;

class abs{ // abstract class -> cannot make object of the abstract class
    public:
    void virtual fun()=0; // pure virtual function
    void f1(){
        cout << "inside absdtract class" << endl;
    }
};
class stds : public abs{
    public:
    void fun(){ // redefine pure virtual function order to make object
        cout << "function of derived class" << endl;
    }
    void display(){
        cout << "inside dervided class of abstract class" << endl;
    }
};
int main(){
    stds s1;
    s1.f1();
    s1.display();
    return 0;
}