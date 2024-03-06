#include <iostream>
using namespace std;

/*
class Geeks{
	public:
		
		void func1(int x){
			cout<<"Value of x is:"<<x <<"\n";
		}
		
		void func(double x){
			cout<<"Value of x is :"<< x<<"\n";
		}
		
		void func(int x ,int y){
			cout<<"Value of x and is:"<< x <<" "<<y<<"\n";
			
		}
};


int main(){
	Geeks obj;
	obj.func(2);
	obj.func(9.123);
	obj.func(12 ,13);
		
}
//==============Operator Overloading=================
*/

class complex{
 int real , image;
 public:
 	
 	complex(int r=0 , int i=0){
 		real=r;
 		image=i;
 		
	 }
	 complex operator +(complex const& obj){
	 	complex temp;
	 	temp.real = real + obj.real;
	 		temp.image = image + obj.image;
	 		return temp;
	 }
	 void print (){
	 	cout<<real<<" "<<"+i"<<image<<"\n";
	 }
};
