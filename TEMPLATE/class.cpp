#include <iostream>
using namespace std;

template <class A> class animal{
    private:
    A x;
    A y;
    public:
    void setX(A b){
        x=b;
    }
    void getX(){
        cout << x << endl;
    }
};

int main(){
    animal <double> z;
    z.setX(33.33);
    z.getX();
    animal <int> z1;
    z1.setX(3);
    z1.getX();
    animal <float> z2;
    z2.setX(12.2);
    z2.getX();
    return 0;
}