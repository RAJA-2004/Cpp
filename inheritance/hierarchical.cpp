#include <iostream>
#include <string>
using namespace std;

class university{
    protected:
    string name;
    public:
    void setName(){
        string n;
        cout << "enter university name : " << endl;
        cin >> n;
        name=n;
    }
    void getN(){
        cout << "university name : " << name << endl;
    }
};

class campus1 : virtual public university{
    protected:
    string n1;
    public:
    void setn1(){
        string x;
        cout << "enter campus 1 name : " << endl;
        cin >> x;
        n1=x;
    }
    void getn1(){
        cout << "campus 1 : " << n1 << endl;
    }
};
class campus2 : virtual public university{
    protected:
    string n2;
    public:
    void setn2(){
        string x;
        cout << "enter campus 2 name : " << endl;
        cin >> x;
        n2=x;
    }
    void getn2(){
        cout << "campus 2 : " << n2 << endl;
    }
};
class location1 : public campus1{
    protected:
    string l1;
    public:
    void setL1(){
        string x;
        cout << "enter location 1 : " << endl;
        cin >> x;
        l1=x;
    }
    void getL1(){
        cout << "location 1 : " << l1 << endl;
    }
};
class location2 : public campus2{
    protected:
    string l2;
    public:
    void setL2(){
        string x;
        cout << "enter location 2 : " << endl;
        cin >> x;
        l2=x;
    }
    void getL2(){
        cout << "location 2 : " << l2 << endl;
    }
};
class display : public location1, public location2{
    public:
    void dis(){
        getN();
        getn1();
        getn2();
        getL1();
        getL2();
    }
};

int main(){
    display d1;
    d1.setName();
    d1.setn1();
    d1.setn2();
    d1.setL1();
    d1.setL2();
    d1.dis();
    return 0;
}