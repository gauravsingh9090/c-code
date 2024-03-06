#include <iostream>
using namespace std;
/*
class Base{
	private:
		int private_variable;
		
	protected:
    	int protected_variable;
    	
    public:
    	Base(){
    		private_variable=10;
    		protected_variable=99;
    		
		}
		friend void friendFunction(Base& obj);
};
 void friendFunction(Base& obj){
 	cout<<"Private variable: "<<obj.private_variable<<endl;
 	cout<<"protected_variable: "<<obj.protected_variable<<endl;
 }
 
 int main(){
 	Base object1;
 	friendFunction(object1);
 	
 }
 //==============================================
 */
 
 class base;
  class anotherClass{
  	public:
  		void memberFunctin(base& obj);
  };
  
  class base{
  	private:
  		int private_variable;
  	
	protected:
	    int protected_variable;
		
		public:
		  base(){
		  	private_variable=10;
		  	protected_variable=99;
		  	
		  } 
	friend void anotherClass::memberFunctin(base&);
  };
  
  void anotherClass::memberFunctin(base& obj){
  	cout<<"Private variable: "<<obj.private_variable<<endl;
  	cout<<"Private variable: "<<obj.private_variable<<endl;
  	
  }
  int main(){
  	base object1;
  	
  }
