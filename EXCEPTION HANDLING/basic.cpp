#include <iostream>
using namespace std;
void fun(){
    throw "fun function -- throw outside try block";
}
int main(){
    int a;
    cout << "enter value of a : ";
    cin >> a;
    cout << "welcome" << endl;
    try{
        cout << "inside try" << endl;
        if(a>9){
            throw 90; 
        }
        else if(a < 9 && a > 3){
            throw 50;
        }
        else if(a<3){
            throw "fail";
        }
        else if(a==3){
            throw;
        }
        else if(a==9){
            fun();
        }
    }
    catch(const char *s){
        cout << s << endl;
    }
    catch(int x){
        cout << "percentage is : " << x << "%" << endl;
    }
    cout << "last line" << endl;
    return 0;
}