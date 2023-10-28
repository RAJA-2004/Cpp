#include <iostream>
using namespace std;

class operators {
    private:
    int x;
    string y;
    public:
    void setData(int x, string y){
        this->x = x;
        this->y = y;
    }
    operators operator +(const operators& other) {
        operators result;
        result.x = this->x;
        result.y = this->y + other.y;
        return result;
    }
    void display() {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

class num {
    private:
    int x,y;
    public:
    void setData(int a){
        x=a;
    }
    friend num operator ++(num &obj,int){
        num temp;
        temp.x=obj.x++;
        return temp;
    }
    void dis(){
        cout << x << endl;
    }
};

class str{
    private:
    string a;
    string b;
    public:
    void getData(string str1,string str2){
        a=str1;
        b=str2;
    }
    str operator +(str &obj){
        str s1;
        s1.a=a+obj.a;
        s1.b=b+obj.b;
        return s1;
    }
    void prin(){
        cout << a << endl << b << endl;
    }
};

class ram{
    private:
    int x,y;
    public:
    void setData(int a,int b){
        x=a;
        y=b;
    }
    friend ram operator +(ram,ram);
    void display(){
        cout << x << endl << y << endl;
    }
    friend ram operator -(ram);
};

ram operator -(ram X){
    ram temp;
    temp.x=-X.x;
    temp.y=-X.y;
    return temp;
};

ram operator +(ram obj1,ram obj2){
    ram temp;
    temp.x=obj1.x+obj2.x;
    temp.y=obj1.y+obj2.y;
    return temp;
}
int main() {
    // num n1,n2;
    // n1.setData(2);
    // n2=n1++;
    // n1.dis();
    // n2.dis();
    // str c,d,e;
    // c.getData("raja","mohit");
    // d.getData("Digvijay","Chamyal");
    // e=c+d;
    // e.prin();

    ram r1,r2,r3;
    r1.setData(10,20);
    r2.setData(30,40);
    r3=r1+r2;
    r3.display();

    ram s1,s2,s3;
    s1.setData(2,3);
    s2=-s1;
    s2.display();
    return 0;
}
