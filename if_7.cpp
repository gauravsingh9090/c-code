#include <iostream>
using namespace std;

int main(){
	double class_held,  class_attended ,   attendence_persentage;
	cout<<"Enter class_held:";
	cin>>class_held;
	
	cout<<"Enter class_Attended:";
	cin>>class_attended;
	
	attendence_persentage =(class_attended/class_held)*100;
	
	if(attendence_persentage>75){
		cout<<"yes_ you are allow to sit for exam\n";
		cout<<"you _attendence persentage:"<<attendence_persentage<<"%";
		
	}else{
		cout<<"yes_ you are not_allow to sit for exam\n";
		cout<<"you_ attendence persentage:"<<attendence_persentage<<"%";
		
	}
}
