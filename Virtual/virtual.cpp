#include <iostream>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void setRoll(){
        int x;
        cout << "enter roll (std) : ";
        cin >> x;
        roll=x;
    }
    void getRoll(){
        cout << "roll is : " << roll << endl;
    }
};

class marks: public virtual student{
    protected:
    int marks;
    public:
    void setRoll(){
        int x;
        cout << "enter roll (marks) : ";
        cin >> x;
        roll=x;
    }
    void setMarks(){
        int y;
        cout << "enter marks : ";
        cin >> y;
        marks=y;
    }
    void getRoll(){
        cout << "roll is : " << roll << endl;
    }
    void getMarks(){
        cout << "marks are : " << marks << endl;
    }
};

class result:virtual public marks{
    public:
    void display(){
        getRoll();
        getMarks();
    }
};

int main(){
    result r1;
    r1.setRoll();
    r1.setMarks();
    r1.display();
    return 0;
}