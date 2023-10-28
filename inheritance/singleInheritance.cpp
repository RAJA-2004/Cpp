#include <iostream>
using namespace std;

class Animal {
    protected:
    int a;
    public:
    void speak(){
        cout << "animal" << endl;
    }
    void getA(int x){
        a=x;
        cout << a << endl;
    }
};

class Dog : public Animal {
    private:
    int b;
    public:
    void bark(){
        cout << "dog" << endl;
    }
};

int main(){
    Dog d1;
    d1.getA(10);
    d1.bark();
    d1.speak();
    return 0;
}