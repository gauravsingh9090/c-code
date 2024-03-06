#include <iostream>
using namespace std;


/*
class Student {
	int rono;
	char name[50];
	double fee;
	
	public:
		
		Student(){
			cout<<"Enter the Rollno:";
			cin>>rono;
			cout<<"Enter the Name:";
			cin>>name;
			
			cout<<"Enter the Fee:";
			cin>>fee;	
		}
		
		void dispaly(){
			cout<<"Rollno: \n"<<rono<<"Name: \n"<<name<<"Fee:\n"<<fee<<endl;
			
		}
};


int main(){
	Student s;
	s.dispaly();
}
//================================================
*/


/*
// Example: defining the constructor outside the class
 
 class student{
 	int rono;
 	char name[50];
 	double fee;
 	
 	public:
 		
 		student();
 		
 		void display();
 };
 
 student::student(){
 	cout<<"Enter the rollno:";
 	cin>>rono;
 	
 	cout<<"Enter the Name:";
 	cin>>name;
 	
 	cout<<"Enter the Fee:";
 	cin>>fee;
 }
 
 void student::display(){
 	cout<<endl<<rono<<"\t"<<name<<"\t"<<fee;
 }
 
 int main(){
 	student s;
 	s.display();
 }
 //==============================================
 */
 
 /*
 class Myclass{
 	public:
 		
 		Myclass(){
 		cout<<"Hello World:";
		 }
 };
 
 int main(){
 	Myclass obj;	
 }
 //==============================================
 */
 
 /*
 class Car{
 	public:
 		
 		string brand;
 		
 		string model;
 		
 		int year;
 		 Car(string x, string y, int z){
 		 	brand = x;
 		 	model = y;
 		 	year = z;
		  }
 };
 
 int main(){
 	Car obj1("BMW","x5",1999);
 	
 	Car obj2("Ford", "Musting", 1969);
 	
 	
 	cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<endl;
 	cout<<obj2.brand<<" "<<obj2.model<<" "<<obj2.year<<endl;
 	
 }
 //========================================
 */
 
 
 /*
 class car{
 	public:
 		
 		string brand;
 	     string model;
 		 int year;
 		 
 		 car(string x , string y , int z){
 		 
		  }
 };
 
 car::car(string x , string y , int z){
 	brand = x;
 	model = y;
 	year= z;
 }
 
 int main(){
 	car c;
 	c.brand;
 	c.model;
 	c.year;
 	
 	cout<<"Brand:"<<brand<<" "<<"Model:"<<" "<<model<<"year"<<" "<<year<<endl;
 }
 
 */
 class  customer{
 	string name;
 	
 	int account_number;
 	
 	int balance;
 	
 	public:
 		
 		//Default constructor
 		
 		customer(){
 			name="Gaurav";
 			 account_number=5;
 			 balance=100;
 			 	
		 }
		 //Parameterized constructor
		 customer(string a , int b ,int c){
		 	name=a;
		 	account_number=b;
		 	balance=c;
		 	
		 	
		 }
		 customer(string a , int b ){
		 	name=a;
		 	account_number=b;
		 
		 	
		 	
		 }
		 void display(){
		 	
       cout<<name<<" "<<account_number<<" "<<	balance<<endl;
   }

 };
 
 int main(){
      customer s , s1("Sinfh",12,34) ,s3("Gaurav",34);;

      s.display();
      s1.display();
      s3.display();
      
      
 }
