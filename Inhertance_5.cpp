#include <iostream>
using namespace std;

/*
class A{
	public:
		void display(){
			cout<<"Function of class A";
		}
};

class B: public A{
	public:
		void display(){
			cout<<"Function of class B";
		}
};
class C: public B{
	
};

int main(){
	C c;
	c.display();
	c.display();
}
=================================================
*/


/*
class Account{
	public:
		float salary = 6000;
};
class Programming : public Account{
	public:
		float bouns =5000;
};

int main(){
	 Programming p1;
	 cout<<"Salary:"<<p1.salary<<endl;
	 cout<<"Bonus:"<<p1.bouns<<endl;
}
====================================================
*/


/*
class Animal{
	public:
		void eat(){
			cout<<"Eating...."<<endl;
		}
};
class Dog: public Animal{
	public:
		void bark(){
			cout<<"Barking...."<<endl;
		}
};
int main(){
	Dog s;
	s.bark();
	s.eat();
}
======================================================
*/


/*
class A{
	int a =4;
	int b=5;
	
	public:
		int mul(){
			int c =a*b;
		}
};
class B: private A{
	public:
		void display(){
			int result= mul();
			cout<<"Multiplication of a and b is:"<<endl;
		}
};

int main(){
	B b;
	b.display();
}
==================================================
*/

/*
class Animal{
	public:
		void eat(){
			cout<<"Eating..."<<endl;
			
		}
};

class Dog : public Animal{
	public:
		void bark(){
			cout<<"Barking..."<<endl;
		}
};

class BabyDog: public Dog{
	public:
		void weep(){
			cout<<"Weeping..."<<endl;
		}
};

int main(){
	BabyDog d1;
	d1.bark();
	d1.eat();
	d1.weep();
}
=================================================
*/

/*
class A{
	protected:
		int a;
		public:
			void get_a(int n){
				a = n;
			}
};

class B{
	protected:
		int b;
		
		public:
			void get_b(int n){
				b = n;
			}
};

class C:public A, public B{
	public:
		void display(){
			cout<<"The Value of a is:"<<a<<endl;
			cout<<"The value of b is:"<<b<<endl;
			cout<<"Addition of a and b is:"<<a+b;
		}
};

int main(){
	 C c;
	 c.get_a(20);
	 c.get_b(10);
	 c.display();
	 
}
=========================================================
*/



/*
class A{
	public:
		void display(){
			cout<<"Class A"<<endl;
			
		}
};

class B{
	public:
		void dispay(){
			cout<<"Class B"<<endl;
		}
};

class C:public A, public B{
	void view(){
	  	display();
	}
};

int main(){
	C c;
	c.dispay();
	c.display();
}
==================================================
*/

/*
class A  
{  
   public:  
void display()  
{  
   cout<<?Class A?;  
}   
} ;  
class B  
{   
  public:  
 void display()  
{  
 cout<<?Class B?;  
}  
} ; 
===============================================
*/ 

/*

class A{
	protected:
		int a;
		public:
			void get_a(){
				cout<<"Enter the value of 'a' "<<endl;
				cin>>a;
			}
};

class B:public A{
	protected:
		int b;
		public:
			void get_b(){
				cout<<"Enter the value of 'b' "<<endl;
				cin>>b;
			}
};

class C{
	protected:
		int c;
		public:
			void get_c(){
			
		cout<<"Enter the value of 'c' "<<endl;
		cin>>c;
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
				
				cout<<"Mulitipliction of a,b,c is:"<<a*b*c<<endl;
			}
};
int main(){
	D d;
	d.mul();
}
============================================================
*/
class Animal{
	public:
		void eat(){
			cout<<"Eating...";
		
		}
};

class Dog:public Animal{
	public:
		void eat(){
			cout<<"Eating bread";
		}
};

int main(){
	Dog d = Dog();
	d.eat();
}
