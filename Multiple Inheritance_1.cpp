#include <iostream>
using namespace std;

class A{
	public:
		void display(){
			cout<<"Class-A"<<endl;
			
		}
};
class B{
	public:
		void diaspay(){
			cout<<"Class-b"<<endl;
			
		}
};

class C:public A, public B{
	void view(){
		display();
		
	}
};

int main(){
	C c;
	c.diaspay();
}
