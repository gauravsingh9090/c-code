#include <iostream>
using namespace std;

class Student{
	public:
		string name;
		int roll, sem , age;
		
		void display(){
			cout<<"Roll_no:"<<roll<<endl;
			cout<<"Name:"<<name<<"Semster:"<<sem<<"Age:"<<age<<endl;
		}
};
int main(){
	Student s1,s2;
	s1.display();
	s2.display();
}
