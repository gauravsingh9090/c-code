#include <iostream>
using namespace std;
/*
class Student{
	int rno;
	char name[50];
	double fee;
	
	public:
		
		Student(){
			cout<<"Enter the RollNo:";
			cin>>rno;
			cout<<"Enter the Name:";
			cin>>name;
			cout<<"Enter the fee:";
			cin>>fee;
		}
		void display(){
			cout<< endl << rno << "\t" << name <<"\t" <<fee;
		}
};
 int main(){
 	Student s ;
 	s.display();
 }
 =================================================
*/

/*
class construct{
	public:
		int a , b;
		
		construct(){
			a =10;
			b=20;
		}
};
 int main(){
 	// default constructor called automatically
 	// when the object is created
 	
 	construct c;
 		cout<<"a:"<<c.a << endl << "b:" << c.b;
 		
	 
 }
 ===========================================
 */
 
 
 /*
 class Student {
 	int rno;
 	char name[50];
 	double fee;
 	
 	public:
 		Student(){  // Explicit default constructor
 			cout<<"Enter the RollNo:";
 			cin>>rno;
 			cout<<"Enter the Fee:";
 			cin>>fee;
		 }
		 
		 void display(){
		 	cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
		 	
		 }
 };
 int main(){
 	Student s;
 	s.display();
 	
 }
 ================================================
 */
 /*
 class Employee{
 	public:
 		Employee(){
 			cout<<"Default Constructor Invoked "<<endl;
 			
		 }
 };
 
 int main(){
 	Employee e1;
 	Employee e2;
 	
 }
 */
 class Employee{
 	public:
 		int id;
 		string name;
 		float salary;
 		
 		Employee(int i , string n , float s){
 			id = i;
 			name = n;
 			
 			salary = s;
		 }
		void display(){
			cout<<id<<" "<<name<<" "<<endl;
		}
 };
 int main(void){
 	Employee e1=Employee(101,"Sonoo",4500);
 	Employee e2=Employee(101,"Sonoo",4500);
 	e1.display();
 	e2.display();
 }
