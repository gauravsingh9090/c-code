#include <iostream>
using namespace std;

class A{
	int length, bredth;
	
	public:
		
		A();
		void area();
		void perimeter();
		
};

A::A(){
	cout<<"\nEnter length and bredth";
	cin>>length>>bredth;
}
void A::perimeter(){
	cout<<2*(length+bredth)<<endl;
}
void A::area(){
	cout<<length*bredth<<endl;
}

int main(){
	A a;
	a.area();
	a.perimeter();
}
