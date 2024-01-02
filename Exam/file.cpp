#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin;
    ofstream fout;
    // fout.open("abc.txt");
    // fout << "raja123";
    fin.open("abc.txt");
    char ch=fin.get();
    cout << ch;
    fin.close();
    // fout.close();
}