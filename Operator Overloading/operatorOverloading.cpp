#include <iostream>
using namespace std;

class operators{
    private:
    int x;
    int y;
    public:
    operators(){
        x=0;
        y=0;
    }
    void setData(int x,int y){
        this->x=x;
        this->y=y;
    }

    void setX(int x){
        this->x=x;
    }

    // PRE INC overloading
    operators operator ++(){
        operators temp;
        temp.x=++x;
        return temp;
    }

    // POST INC overloading
    operators operator ++(int){
        operators temp;
        temp.x=x++;
        return temp;
    }

    // PRE DEC overloading
    operators operator --(){
        operators temp;
        temp.x=--x;
        return temp;
    }

    // PRE DEC overloading
    friend operators operator --(operators &obj,int);

    // BINARY operator overloading
    operators operator +(operators c){
        operators temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
    }

    // UNARY operator overloading
    operators operator -(){
        operators temp;
        temp.x=-x;
        temp.y=-y;
        return temp;
    }
    void Display(){
        cout << x << endl;
    }

    void display(){
        cout << x << endl;
        cout << y << endl;
    }
};

operators operator --(operators &obj,int){
    operators temp;
    temp.x=obj.x--;
    return temp;
}
int main(){
    // operators c1,c2,c3;
    // c1.setData(1,2);
    // c2.setData(3,4);
    // c3=c1+c2;
    // c3.display();

    // operators o1,o2;
    // o1.setData(9,10);
    // o2=-o1;
    // o2.display();

    // operators i1,i2,i3,i4;
    // i1.setX(99);
    // i3.setX(101);
    // i2=++i1;
    // i4=i3++;
    // i1.Display();
    // i2.Display();
    // i3.Display();
    // i4.Display();

    operators k1,k2,k3,k4;
    k1.setX(100);
    k2=--k1;
    k3.setX(102);
    k4=k3--;
    k3.Display();
    k4.Display();
    k1.Display();
    k2.Display();
    return 0;
}