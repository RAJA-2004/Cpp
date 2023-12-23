#include <fstream>
#include <iostream>
using namespace std;
int main(){

    // writing 
    // ofstream fout;
    // fout.open("myfile.txt");
    // // fout << "raja digvijay singh";
    // int id;
    // string name;
    // while(true){
    //     cout << "enter stduent id (-1 to exit) : ";
    //     cin >> id;
    //     if(id==-1){
    //         break;
    //     }
    //     fout << id << " ";
    //     cout << "enter student name : ";
    //     cin >> name;
    //     fout << name;
    //     fout << '\n';
    // }
    // fout.close();

    // reading
    char ch;
    ifstream fin;
    fin.open("myfile.txt");
    ch=fin.get();
    // while(!fin.eof()){
    //     cout << ch;
    //     ch=fin.get();
    // }

    int count=0;
    while(fin.get(ch)){
        if(ch=='\n'){
            count++;
        }
    }
    fin.close();
        cout << "number of lines : " << count;
    return 0;
}
