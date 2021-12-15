#include<iostream>
#include<string>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	string grade;
	int A=1;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student ["<<A<<"]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		A++;
		if(grade=="A") // if grade is A
			count[0]++;
		else if(grade=="B") // if grade is B
			count[1]++;
		else if(grade=="C")
			count[2]++;
		else if(grade=="D")
			count[3]++;
		else if(grade=="F")
			count[4]++;
		else{
			if(grade != "0"){
			cout << "Wrong input. Please input again."<<endl;
			A--;
			}
		} 
	}while(grade != "0");

	cout << "In total "<< count[0]+count[1]+count[2]+count[3]+count[4]<< " students."<<endl;
	cout <<"A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;
	
	return 0;
}
