//Constructor----> to initialized the value of all data member
//1) Default
//2) parameried
//3)copy
//
//Feature
//a)it special member function
//b)name same as the name of class
//c)it can't return any value of this special member
//d) Constructor calling implicit (Automaticlly)
//e)Whenever object is created Constructor get called


#include <iostream>
using namespace std;
 class Student{
	public:
		string name;
		int age , roll , sem;
		
		Student(){
			cout<<"Enter first name then roll no then sem then Year"<<endl;
			cin>>name>>roll>>sem>>age;
			cout<<"This value are assigned to given value"<<endl;
		}
		
		
		
		Student (string NAME, int ROLL,int SEM, int AGE){
	            name=NAME;
	            roll=ROLL;
	            sem=SEM;
	            age=AGE;
		}
		
		void Display(){
			cout<<"Name:"<<name<<" ";
			cout<<"AGE:"<<age<<" ";
			cout<<"Roll no:"<<roll<<" ";
			cout<<"Sem:"<<sem<<" "<<endl;
			
		}
};
        int main(){
        	Student s1,s2,s3("Guurav",3,34,34);
        	s1.Display();
        	s2.Display();
        	s3.Display();
		}


