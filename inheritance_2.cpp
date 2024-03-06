# include <iostream>
using namespace std;

/*
class Parent{
	
	
	void privatef(){
		cout<<"I am Private member";
		
	}
	public:
		void publicf(){
			cout<<"I am public member";
		}
		protected:
			void protectedf(){
				cout<<"I am protected member";
				
			}
};
class child:public Parent{
	public:
		// data member , member fun()
		
		void specialf(){
			protectedf();
			
		}
};
int main(){
	child c;
	c.publicf();
	c.specialf();
	
}

============================================
*/
/*
class A{
	private:
		void display_A9(){
			cout<<"Function of class A";
			
		}
};
int main(){
	A a;
	a.display_A9();// Error
	
}
===================================================
*/


/*
class A{
	protected:
		void display_A(){
			cout<<"Function of class A";
		}
		public:
			void access_display_A(){
				display_A();
			}
};

int main(){
	A a;
	a.access_display_A();
}

=======================================================
*/
/*
class Parent{
	void privatef(){
		cout<<"I am private member;
	}
	public:
		void publicf(){
			cout<<"I am public Member";
		}
		protected:
			void protectedf(){
				cout<<"I am protected member";
			}
};
class child:protected Parent{
	// protected : // publicf()
};
int main(){
	child c;
	c.publicf();  // Error
}

======================================================
*/
class Parent{
	void privatef(){
		cout<<"I am private member";
	}
	public:
		void publicf(){
			cout<<"I am public Member";
		}
		protected:
			void protectedf(){
				cout<<"I am protected member";
			}
};
class child:protected Parent{
	public:
		void f(){
			protectedf();
		    publicf();
		}
};
int main(){
	child c;
	c.publicf();  // Error
}
