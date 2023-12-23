#include <iostream>
#include <fstream>
using namespace std;
void copy(const char *f1,const char *f2){
    ifstream fin;
    ofstream fout;
    fin.open(f1);
    fout.open(f2);
    char ch;
    ch=fin.get();
    while(!fin.eof()){
        if(ch>='a' && ch<='z'){
            ch-=32;
        }
        else if(ch>='A' && ch<='Z'){
            ch+=32;
        }
        fout << ch;
        ch=fin.get();
    }
    fin.close();
    fout.close();
}
int main(){
    copy("raja.txt","rani.txt");
    cout << "content copied" << endl;
    return 0;
}