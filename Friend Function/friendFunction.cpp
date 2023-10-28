#include <iostream>
using namespace std;

class raja{

    private:
    string name;
    friend void fun();

    public:
    int roll;
    friend int area(int length,int width);
};

void fun(){
    cout << "friend inside PRIVATE" << endl;
}

int area(int length, int width){
    int a=length*width;
    return a;
}

int main(){

    // without object creation
    cout << "area : " << area(10,5) << endl;

    // ONLY FRIEND function can access inside the private access modifier
    fun();
    return 0;
}