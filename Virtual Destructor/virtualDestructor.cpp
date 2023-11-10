#include <iostream>
using namespace std;
class base{
    protected:
    int x;
    public:
    base(){
        cout << "base constructor" << endl;
    }
    // using virtual will also invoke derived destructor
    virtual ~base(){
        cout << "base destructor" << endl;
    }
};
class derived : public base{
    protected:
    int x;
    public:
    derived(){
        cout << "derived constructor" << endl;
    }
    ~derived(){
        cout << "derived destructor" << endl;
    }
};
int main(){
    derived *d = new derived();  
    base *b = d;
    delete b;
    return 0;
}