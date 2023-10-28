#include <iostream>
using namespace std;

class Animal {
    private:
    int a;
    public:
    void speak(){
        cout << "animal" << endl;
    }
};

class Bird {
    private:
    int b;
    public:
    void chirp(){
        cout << "bird" << endl;
    }
};

class Human : public Animal, public Bird {
    private:
    int c;
    public:
    void run(){
        cout << "human" << endl;
    }
};

int main(){
    Human h1;
    h1.speak();
    h1.chirp();
    h1.run();
    return 0;
}