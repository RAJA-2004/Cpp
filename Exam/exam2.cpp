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
template <class A> class raja{
    public:
    A greatest(A x,A y,A z){
        if(x>y && x>z){
            return x; 
        }
        else if(y>x && y>z){
            return y;
        }
        else{
            return z;
        }
    }
};

template <class X> X exp(X a,X b){
    if(a>b){
        return a+b;
    }
    else{
        return a-b;
    }
}

int main(){
    // stds s1;
    // s1.f1();
    // s1.display();
    // raja <double> r1;
    // double x = r1.greatest(13.6,11,13.7);
    // cout << "greatest number : " << x << endl;
    long x=exp(3,5);
    cout << x << endl;
    return 0;
}