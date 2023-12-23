#include <iostream>
#include <fstream>
using namespace std;

// OPERATOR OVERLOADING
// class oops{
//     private:
//     int x,y;
//     public:
//     void setData(int x,int y){
//         this->x=x;
//         this->y=y;
//     }
//     void getData(){
//         cout << "x : " << x << endl << "y : " << y << endl;
//     }
//     oops operator +(oops obj){
//         oops temp;
//         temp.x=x+obj.x;
//         temp.y=y+obj.y;
//         return temp;
//     }
//     oops operator -(){
//         oops temp;
//         temp.x=-x;
//         temp.y=-y;
//         return temp;
//     }
//     oops operator ++(int){
//         oops temp;
//         temp.x=x++;
//         temp.y=++y;
//         return temp;
//     }
//     friend oops operator --(oops& obj,int);
//     friend ostream& operator <<(ostream& dout,oops& obj);
//     friend istream& operator >>(istream& din,oops& obj);
// };
// ostream& operator <<(ostream& dout,oops& obj){
//     dout << "x : " << obj.x << endl << "y : " << obj.y << endl;
//     return dout;
// }
// istream& operator >>(istream& din,oops& obj){
//     din >> obj.x >> obj.y;
//     return din;
// }
// oops operator --(oops& obj,int){
//     oops temp;
//     temp.x=obj.x--;
//     temp.y=--obj.y;
//     return temp;
// }
// int main(){
//     oops o1,o2,o3,a1,a2,c1,c2,d1,d2,z1,z2;
//     o1.setData(1,2);
//     o2.setData(3,4);
//     o3=o1+o2;
//     o3.getData();
//     a1.setData(3,4);
//     a2=-a1;
//     a2.getData();
//     c1.setData(5,6);
//     c2=c1++;
//     c2.getData();
//     d1.setData(1,2);
//     d2=d1--;
//     d1.getData();
//     cout << "enter numbers : ";
//     cin >> z1;
//     cout << z1;
//     return 0;
// }

// EXCEPTION HANDLING
// int main(){
//     cout << "oops practical" << endl;
//     double x,y;
//     try{
//         cout << "enter num : ";
//         cin >> x;
//         cout << "enter the divisor : ";
//         cin >> y;
//         if(y==0){
//             throw 0;
//         }
//         else{
//             cout << x/y << endl;
//         }
//     }
//     catch (int e){
//         if(e==0){
//             cout << "Error !! division by zero";
//         }
//     }
// }

//OBJECT ARRAY
// class oops{
//     private:
//     int roll;
//     string name;
//     int marks;
//     public:
//     void setName(){
//         cin >> name;
//     }
//     void setRoll(){
//         cin >> roll;
//     }
//     void setMarks(){
//         cin >> marks;
//     }
//     void display(){
//         cout << "name : " << name << endl;
//         cout << "roll : " << roll << endl;
//         cout << "marks : " << marks << endl;
//     }
// };
// int main(){
//     oops o1[5];
//     for(int i=0;i<5;i++){
//         cout << "details of student " << i+1 << endl;
//         cout << "enter name : ";
//         o1[i].setName();
//         cout << "enter roll : ";
//         o1[i].setRoll();
//         cout << "enter Marks : ";
//         o1[i].setMarks();
//     }
//     for(int i=0;i<5;i++){
//         o1[i].display();
//     }
// }

//FILE HANDILING 
bool isPrime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i<num/2;++i){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
bool isPalindrome(int num){
    int original = num;
    int rev=0;
    while(num>0){
        rev=rev*10+num%10;
        num=num/10;
    }
    return original==rev;
}
int main(){
    ofstream fout;
    ifstream fin;
    fin.open("raja.txt");
    int num;
    int count=0;
    // fout.open("raja1.txt");
    // char ch;
    // int count=0;
    // int arr[5];
    // for(int i=0;i<5;i++){
    //     cin >> arr[i];
    // }
    // for(int i=0;i<5;i++){
    //     fout << arr[i] << endl;
    // }
    // while(fin.get(ch)){
    //     if(ch=='\n'){
    //         count++;
    //     }
    // }
    // cout << count+1;

    // ch=fin.get();
    // while(!fin.eof()){
        // fout << ch;
        // ch=fin.get();
        // if(ch>='a' && ch<='z'){
        //     ch -=32;
        // }
        // else if(ch>='A' && ch<='Z'){
        //     ch +=32;
        // }
        // fout << ch;
        // ch=fin.get();

    // }
    // fout.close();
    // while(fin >> num){
    //     if(isPrime(num)){
    //         ++count;

    //         cout << num << " is a prime number" << endl;
    //     }
    // }
    while(fin >> num){
        if(isPalindrome(num)){
            ++count;
            cout << num << " is palindrome" << endl;
        }
    }
    fin.close();
    cout << "total : " << count;
    return 0;
}