#include<iostream>
#include<vector>
using namespace std;
class roll{
    public:
    void sort(vector<int>& ans){
        int size=ans.size();
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<ans.size();i++){
            if(ans[i]%2==0){
                even.push_back(ans[i]);
            }
            else{
                odd.push_back(ans[i]);
            }
        }
        ans.clear();
        for(int i=0;i<even.size();i++){
            ans.push_back(even[i]);
        }
        for(int i=0;i<odd.size();i++){
            ans.push_back(odd[i]);
        }
    }
};
class student{
    private:
    string name;
    int age;
    string address;
    public:
    student(){
        this->name="unkown";
        this->age=0;
        this->address="not available";
    }
    void setInfo(string n, int a){
        name=n;
        age=a;
    }
    void setInfo(string n,string add,int a){
        name=n;
        age=a;
        address=add;
    }
    ~student(){
        cout << "destructor called" << endl;
    }
    void display(){
        cout << name << endl;
        cout << age << endl;
        cout << address << endl;
    }
};
class overload{
    private:
    int x,y;
    public:
    void get(int x,int y){
        this->x=x;
        this->y=y;
    }
    friend overload operator *(overload& obj,overload c);
    void display(){
        cout << x << endl;
        cout << y << endl;
    }
};
overload operator *(overload& obj, overload c){
    overload temp;
    temp.x=c.x*obj.x;
    temp.y=c.y*obj.y;
    return temp;
}
class person{
    protected:
    int phone_no;
    string address;
    public:
    void setPhone(int a){
        phone_no=a;
    }
    void setAddress(string b){
        address=b;
    }
    void display(){
        cout << "phone number : " << phone_no << endl;
        cout << "address : " << address << endl;
    }
};
class emp : public person{
    protected:
    int eno;
    string ename;
    public:
    void setEno(int x){
        eno=x;
    }
    void setEname(string n){
        ename=n;
    }
    void print(){
        cout << "eno : " << eno << endl;
        cout << "ename : " << ename << endl;
    }
};
class manager : public emp{
    private:
    string desig;
    string dept;
    int bSalary;
    public:
    void setDept(string x){
        dept=x;
    }
    void setDdesig(string y){
        desig=y;
    }
    void setSalary(int x){
        bSalary=x;
    }
    int getSal(){
        return bSalary;
    }
    void dis(){
        cout << desig << endl << dept <<endl << bSalary << endl;
    }
};
class parent{
    protected:
    int val;
};
class child1 : virtual public parent{
    public:
    child1(){
        val=1;
    }
};
class child2 : virtual public parent{
    public:
    child2(){
        val=2;
    }
};
class derived : public child2, public child1{
    public:
    void getval(){
        cout << " value is : " << val << endl;
    }
};
class a{
    public:
    void print(){
        cout << "class a" << endl;
    }
};
class b{
    public:
    void print(){
        cout << "class b" << endl;
    }
};
class ab : public a, public b{
    public:
    void print(){
        a::print();
        b::print();
    }
};
int main(){
    // roll r1;
    // vector<int>ans;
    // int n;
    // cout << "enter no of students : " << endl;
    // cin >> n;
    // cout << "enter roll numbers : " << endl;
    // for(int i=0;i<n;i++){
    //     int a;
    //     cin >> a;
    //     ans.push_back(a);
    // }
    // r1.sort(ans);
    // for(int i=0;i<n;i++){
    //     cout << ans[i] << " ";
    // }

    // student s1[10];
    // for(int i=0;i<10;i++){
    //     int age;
    //     cout << "enter age : " << endl;
    //     cin >> age;
    //     string name,address;
    //     cout << "enter name : " << endl;
    //     cin >> name;
    //     cout << "enter address : " << endl;
    //     cin >> address;
    //     s1[i].setInfo(name,address,age);
    // }
    // for(int i=0;i<10;i++){
    //     cout << "details of student " << i+1;
    //     s1[i].display();
    // }

    // overload o1,o2,o3;
    // o1.get(2,3);
    // o2.get(5,2);
    // o3=o1*o2;
    // o3.display();

    // int n;
    // cout << "enter number of managers : ";
    // cin >> n;
    // manager m1[n];
    // for(int i=0;i<n;i++){
    //     string desig,dept;
    //     int sal;
    //     cout << "enter designation : ";
    //     cin >> desig;
    //     cout << "enter dept : ";
    //     cin >> dept;
    //     cout << "enter salary : ";
    //     cin >> sal;
    //     m1[i].setDept(dept);
    //     m1[i].setDdesig(desig);
    //     m1[i].setSalary(sal);
    // }
    // int i=0,j=0;
    // for(i=0;i<n;i++){
    //     // 10 20 40 1 2 3 4 
    //     int max=m1[i].getSal(); // 10
    //     int maxindex=i; // 0 
    //     for(j=i+1;j<n;j++){
    //         int temp=m1[j].getSal();
    //         if(temp>max){
    //             max=m1[j].getSal();
    //             maxindex=j;
    //         }
    //     }
    // }
    // cout << j << endl;
    // m1[j-1].dis();
    // return 0;

    // derived d1;
    // d1.getval();
    // return 0;

    // ab a1;
    // a1.print();

    // int a,b,c;
    // cout << "enter a : ";
    // cin >> a;
    // cout << "enter b : ";
    // cin >> b;
    // try{
    //     if(b==0){
    //         throw 0;
    //     }
    //     c=a/b;
    //     if(c==0){
    //         throw "fail";
    //     }
    //     cout << c;
    // }
    // catch(int e){
    //     cout << "exception !! division by 0" << endl;
    // }
    // catch(const char* s){
    //     cout << "exception !! fail" << endl;
    // }
}