#include <iostream>
using namespace std;

class A{
	protected:
		int a;
		
		public:
			void get_a(){
				cout<<"Enter the value odf a:"<<endl;
				cin>>a;
				
			}
};
class B:public A{
	protected:
		int b;
		
		public:
			void get_b(){
				cout<<"Enter the value of b:"<<endl;
				cin>>b;
			}
};
class C{
	protected:
		int c;
			public:
			void get_c(){
				cout<<"Enter the value of c is:"<<endl;
			}
};

class D:public B, public C{
	protected:
		int d;
		
		public:
			
			void mul(){
				get_a();
				get_b();
				get_c();  
				
				cout<<"Multipication of a,b,c is:"<<a*b*c<<endl;
				
			}	
};

int main(){
	D d;
	d.get_a();
	d.get_b();
	d.mul();
}
