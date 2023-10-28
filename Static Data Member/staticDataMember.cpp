// Static Data Members are shared among all the objects

#include <iostream>
using namespace std;

class raja{
    private:
    // static Data member declaration
    static int x;
    int y;
    public:
    void setX(int a){
        x=a;
    }
    // with static keyword
    void demo1(){
        static int count = 0;
        cout << count << endl;
        count++;
    }
    // without static keyword
    void demo2(){
        int count = 0;
        cout << count << endl;
        count++;
    }
    // static function
    static void demo3(){
        cout << "static void function" << endl;
        cout << "static member function accessing static data member" << endl << x << endl;  
    }
};
int raja::x=2; // static data member value assigned out class
int main(){

    // calling static function using scope resolution operator

    raja r1;
    r1.setX(4);
    raja::demo3();
    // cout << "with static keyword" << endl;
    // for (int i=0;i<5;i++){
    //     r1.demo1();
    // }
    // cout << "without static keyword" << endl;
    // for(int i=0;i<5;i++){
    //     r1.demo2();
    // }

    return 0;
}