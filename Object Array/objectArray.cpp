#include <iostream>
using namespace std;

class student {
    private:
    string name;
    int marks;
    public:
    void getName(){
        cin >> name;
    }
    void getMarks(){
        cin >> marks;
    }
    void display(){
        cout << "Name : " << name << endl << "Marks : " << marks << endl;
    }
};
int main(){

    // array of object
    student arr[3];

    for (int i=0;i<3;i++){
        cout << "student " << i+1 << endl;
        cout << "enter name : ";
        arr[i].getName();
        cout << "enter marks : ";
        arr[i].getMarks();
    }

    for (int i=0;i<3;i++){
        cout << "student " << i+1 << endl;
        arr[i].display();
    }
}