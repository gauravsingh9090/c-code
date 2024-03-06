#include <iostream> 

using namespace std;

class Student {
	string name;
	
	public:
		Student(string nm){
			name=nm;
		}
		
		void display(){
			cout<<"My name is"<<name;
		}
};

  int main(){
  	Student s1;
  	// Note: constuctor prametirized , calling default error 
  	
  	s1.name="Ajay";   // default acces private not allow
  }
