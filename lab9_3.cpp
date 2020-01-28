//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

double findMean(double x,int N){
    return x/N;
}

double findSD(double y,int N,double x){
    return sqrt((y/N)-pow(x,2));
}

int main(){

    ifstream source("C:\\Users\\wisaTong\\Desktop\\ComPro\\Lab\\lab9-2562-2-ZenPtc\\score.txt");
    string textline;
    int count=0;
    double sum1=0,sum2=0;
    while(getline(source,textline)){
        sum1 += atof(textline.c_str()) ;
        sum2 += pow(atof(textline.c_str()),2);
        count++;
    }
    cout << "Number of data = " << count << endl;
    cout << "Mean = " << findMean(sum1,count) << endl;
    cout << "Standard deviation = " << findSD(sum2,count,findMean(sum1,count)) << endl;

    return 0;
}