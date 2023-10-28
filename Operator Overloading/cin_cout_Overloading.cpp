#include <iostream>
using namespace std;

class raja {
private:
    int x, y;

public:
    void setData(int a, int b) {
        x = a;
        y = b;
    }

    void display() {
        cout << "x : " << x << "\ny : " << y << endl;
    }

    friend ostream& operator <<(ostream& dout, raja C);
    friend istream& operator >>(istream& din, raja& D);
};

ostream& operator <<(ostream& dout, const raja C) {
    dout << "x : " << C.x << "\ny : " << C.y;
    return dout;
}

istream& operator >>(istream& din, raja& D) {
    din >> D.x >> D.y;
    return din;
}

int main() {
    raja c1;
    cout << "Enter the numbers: ";
    cin >> c1;
    cout << "You entered: ";
    cout << c1;

    return 0;
}
