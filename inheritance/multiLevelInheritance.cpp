#include <iostream>
using namespace std;

class student {
    protected:
    int roll;
    public:
    void getRoll();
    void setRoll(int x);
};

void student::setRoll(int x){
    roll=x;
}
void student::getRoll(){
    cout << "Roll No is : " << roll << endl;
}

class test : public student{
    protected:
    float m1,m2;
    public:
    void getMarks();
    void setMarks(float x,float y);
};

void test :: setMarks(float x,float y){
    m1=x;
    m2=y;
}
void test :: getMarks(){
    cout << "Marks are : " << m1 << " " << m2 << endl;
}

class result : public test {
    protected:
    float total;
    public:
    void getTotal();
    void display();
};

void result :: getTotal(){
    float sum = m1+m2;
    cout << "total : " << sum << endl;
}

void result :: display(){
    result res;
    res.getMarks();
    res.getRoll();
    res.getTotal();
}

int main(){
    result res;
    res.setRoll(10);
    res.setMarks(30.5,40.5);
    res.getMarks();
    res.getRoll();
    res.getTotal();
    return 0;
}