#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	int i=1,total=0;
	char grade;
	do{
		cout << "Student [" << i << "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='0') break;
		if(grade=='A'){ // if grade is A
			count[0] += 1;//Do something
			total++;
		}else if(grade=='B'){ // if grade is B
			count[1] += 1;//Do something
			total++;
		}//and so on ... for grade = C, D, F	
		else if(grade=='C') {
			count[2] += 1;
			total++;
		}
		else if(grade=='D') {
			count[3] += 1;
			total++;
		}
		else if(grade=='F') {
			count[4] += 1;
			total++;
		}
		else{ // grade is wrong input
			cout << "Wrong input.Please input again." << endl;
			i--;
		} 
		i++;
	}while(true) ;
	
	

	cout << "In total " << total << "  students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;	
	//	and so on ... for grade = C, D, F	
	
	
	return 0;
}