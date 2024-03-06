//Wap to create named student , data, member-> namespace , age ,Sem 

// member function -> display() ,increment_sem();

#include <iostream>
using namespace std;

class Student{
	public:
		string name;
		int roll,sem,age;
		
		void insert(int rollno,int semm , int agee , string namee){
			roll=rollno;
			sem=semm;
			age=agee;
			name=namee;
			
		}
		void display(){
			cout<<"Name:"<<name<<" ";
			cout<<"Age:"<<age<<" ";
			cout<<"Sem:"<<sem<<" ";
	
		}
};
int main(){
	Student s1,s2,s3,s4;
	s1.name="Ajay";
	s1.age=45;
	s1.sem=5;
	s1.display();
	s2.insert(23,18,3,"Gaurav");
	s2.display();
}
