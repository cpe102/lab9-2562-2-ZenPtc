//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ifstream source("C:\\Users\\wisaTong\\Desktop\\ComPro\\Lab\\lab9-2562-2-ZenPtc\\cheerbook.txt");
    ofstream dest("C:\\Users\\wisaTong\\Desktop\\ComPro\\Lab\\lab9-2562-2-ZenPtc\\cheerbook_copy.txt");
    string textline;
    dest << "-------------------- SOTUS ---------------------" << endl;
    while(getline(source,textline)){
        dest << textline << endl;
    }
    dest << "-------------------- SOTUS ---------------------" << endl;
    source.close();
    dest.close();

    return 0;
}