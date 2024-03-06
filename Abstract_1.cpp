#include <iostream>
using namespace std;
/*
class ParentAbstractClass{
	public:
		
	virtual	void f1()=0;  // declare
	
	
	virtual void f2(int a)=0; // declare
	
	void f3(){
		cout<<"here we define f3():"<<endl;
	}
};
 class ChildofAbstractClass :public ParentAbstractClass{
 	public:
 			virtual	void f1(){
 			cout<<"In child we define pur virtual f1()"<<endl;  // defination / implementaion
 			
			 }
			 virtual	void f2(int a){
 			cout<<"In child we define pur virtual f2()"<<endl;  // defination / implementaion
 			
			 }
 };

int main(){
//	ChildofAbstractClass c;
//	c.f1();
//	c.f2(3);
//	c.f3();

ParentAbstractClass *ptr;
ChildofAbstractClass  c;
ptr=&c;
ptr->f1();
ptr->f2(5);
ptr->f3();

}
//==============================
*/

/*
class RBI{
	public:
		double interst;
		
		virtual void display(double d)=0;
};
class AXIS :public RBI{
	public:
		 void display(double d){
			interst=d;
			cout<<"Interest AXIS(10.2%)--> "<<interst<<endl;
		}
};
class SBI: public RBI{
	public:
		 void display(double d){
			interst=d;
			cout<<"Interest SBI(8.9%)--> "<<interst<<endl;
		}
};
class PNB: public RBI{
	public:
	  	void display(double d){
			interst=d;
			cout<<"Interest PNB(7.9%)--> "<<interst<<endl;
		}
};

int main(){
	AXIS a;
	SBI s;
	PNB p;
	a.display(235.67);
	s.display(679.90);
	p.display(897.78);
}

/*	
	
	RBI * base;
	base =&a;
	base->display(2564.367834);
	base =&s;
	base->display(25784.677434);
	base =&p;
	base->display(23490.38834);
	*
}
	
//===============================	
*/

/*
class Base{
	
	int x;
	
	public:
		
		virtual void fun()=0;
		
		int getx(){
			return x;
		}
};	

class Derived : public Base{
//	int y;
	
	public:
		
	virtual	void fun(){
			cout<<"fun() called:";
			
		}
};

int main(){
	Derived d;
	d.fun();
}
//===================================	
*/

class Base{
	protected :
		
		int x;
		
		public:
			
			virtual void fun() =0;
			
			Base(int i){
				x =i;
				cout<<"Constuctor of base called\n";
	}
};

class Derived : public Base{
	int y;
	
	public:
		Derived (int i , int j) :Base(i){
			y=j;
		}
		
		void fun(){
			cout<<"X="<<x<<"Y="<<y<<"\n";
		}
};

int main(){
	Derived d(4,5);
	
	d.fun();
	
	Base *ptr = new Derived(6,7);
	ptr->fun();

}
