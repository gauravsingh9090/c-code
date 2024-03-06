#include <iostream>
using namespace std;

class Complex{
	int real , imaginary;
	
	public:
		Complex(int a, int b ){
			real=a;
			imaginary=b;
		}
		
		Complex operator +(Complex obj){
			Complex temp(0,0);
			temp.real=real+obj.real;
			temp.imaginary=imaginary+obj.imaginary;
			return temp;
		}
		void display(){
			cout<<"Real:"<<real<<"\n";
			cout<<"Imaginary:"<<imaginary;
		}
};  

int main(){
	Complex a1(1,2),c1(3,6),c3(7,8);
	Complex   c4=a1+c1+c3;
	         c4.display();
}
